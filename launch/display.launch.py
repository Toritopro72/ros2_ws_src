import os
from launch import LaunchDescription
from launch_ros.actions import Node
from ament_index_python.packages import get_package_share_directory
import xacro

def generate_launch_description():
    pkg_name = 'my_robot_description'
    
    # Rutas a los archivos Xacro y RViz
    xacro_file = os.path.join(get_package_share_directory(pkg_name), 'urdf', 'robot.urdf.xacro')
    rviz_config_file = os.path.join(get_package_share_directory(pkg_name), 'rviz', 'display.rviz')
    
    # Procesar Xacro a URDF
    robot_description_config = xacro.process_file(xacro_file)
    robot_description = {'robot_description': robot_description_config.toxml()}

    # Nodo robot_state_publisher
    node_robot_state_publisher = Node(
        package='robot_state_publisher',
        executable='robot_state_publisher',
        output='screen',
        parameters=[robot_description]
    )

    # Nodo joint_state_publisher_gui
    node_joint_state_publisher_gui = Node(
        package='joint_state_publisher_gui',
        executable='joint_state_publisher_gui',
        name='joint_state_publisher_gui',
        output='screen'
    )

    # Nodo RViz2 cargando el archivo de configuración guardado
    node_rviz = Node(
        package='rviz2',
        executable='rviz2',
        name='rviz2',
        output='screen',
        arguments=['-d', rviz_config_file]
    )

    return LaunchDescription([
        node_robot_state_publisher,
        node_joint_state_publisher_gui,
        node_rviz
    ])

