#[cfg(feature = "serde")]
use serde::{Deserialize, Serialize};



// Corresponds to robx7_interfaces__msg__HardwareStatus

// This struct is not documented.
#[allow(missing_docs)]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct HardwareStatus {

    // This member is not documented.
    #[allow(missing_docs)]
    pub temperatura: i64,


    // This member is not documented.
    #[allow(missing_docs)]
    pub motores_listos: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub debug_msg: std::string::String,

}



impl Default for HardwareStatus {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::HardwareStatus::default())
  }
}

impl rosidl_runtime_rs::Message for HardwareStatus {
  type RmwMsg = super::msg::rmw::HardwareStatus;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        temperatura: msg.temperatura,
        motores_listos: msg.motores_listos,
        debug_msg: msg.debug_msg.as_str().into(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      temperatura: msg.temperatura,
      motores_listos: msg.motores_listos,
        debug_msg: msg.debug_msg.as_str().into(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      temperatura: msg.temperatura,
      motores_listos: msg.motores_listos,
      debug_msg: msg.debug_msg.to_string(),
    }
  }
}


