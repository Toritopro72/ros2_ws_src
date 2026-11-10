import os
from launch import LaunchDescription
from launch.actions import IncludeLaunchDescription, DeclareLaunchArgument
from launch.launch_description_sources import PythonLaunchDescriptionSource
from launch.substitutions import LaunchConfiguration
from launch_ros.actions import Node
from ament_index_python.packages import get_package_share_directory
import xacro

def generate_launch_description():
    pkg_name = 'my_robot_description'
    
    # Ruta al archivo Xacro
    xacro_file = os.path.join(get_package_share_directory(pkg_name), 'urdf', 'robot.urdf.xacro')
    
    # Procesar Xacro a URDF
    robot_description_config = xacro.process_file(xacro_file)
    robot_description = {'robot_description': robot_description_config.toxml()}

    # 1. Nodo robot_state_publisher
    node_robot_state_publisher = Node(
        package='robot_state_publisher',
        executable='robot_state_publisher',
        output='screen',
        parameters=[robot_description]
    )

    # 2. Iniciar Gazebo Sim con el mundo vacío por defecto
    gazebo_sim = IncludeLaunchDescription(
        PythonLaunchDescriptionSource(
            os.path.join(get_package_share_directory('ros_gz_sim'), 'launch', 'gz_sim.launch.py')
        ),
        launch_arguments={'gz_args': '-r empty.sdf'}.items()
    )

    # 3. Nodo Spawner para importar el robot desde el topic /robot_description
    node_spawn_entity = Node(
        package='ros_gz_sim',
        executable='create',
        arguments=[
            '-topic', 'robot_description',
            '-name', 'my_robot',
            '-z', '0.2'
        ],
        output='screen'
    )

    return LaunchDescription([
        node_robot_state_publisher,
        gazebo_sim,
        node_spawn_entity
    ])

