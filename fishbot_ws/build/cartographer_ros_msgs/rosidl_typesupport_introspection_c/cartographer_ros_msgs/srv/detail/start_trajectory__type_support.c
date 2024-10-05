// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from cartographer_ros_msgs:srv/StartTrajectory.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "cartographer_ros_msgs/srv/detail/start_trajectory__rosidl_typesupport_introspection_c.h"
#include "cartographer_ros_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "cartographer_ros_msgs/srv/detail/start_trajectory__functions.h"
#include "cartographer_ros_msgs/srv/detail/start_trajectory__struct.h"


// Include directives for member types
// Member `configuration_directory`
// Member `configuration_basename`
#include "rosidl_runtime_c/string_functions.h"
// Member `initial_pose`
#include "geometry_msgs/msg/pose.h"
// Member `initial_pose`
#include "geometry_msgs/msg/detail/pose__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void cartographer_ros_msgs__srv__StartTrajectory_Request__rosidl_typesupport_introspection_c__StartTrajectory_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  cartographer_ros_msgs__srv__StartTrajectory_Request__init(message_memory);
}

void cartographer_ros_msgs__srv__StartTrajectory_Request__rosidl_typesupport_introspection_c__StartTrajectory_Request_fini_function(void * message_memory)
{
  cartographer_ros_msgs__srv__StartTrajectory_Request__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember cartographer_ros_msgs__srv__StartTrajectory_Request__rosidl_typesupport_introspection_c__StartTrajectory_Request_message_member_array[5] = {
  {
    "configuration_directory",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(cartographer_ros_msgs__srv__StartTrajectory_Request, configuration_directory),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "configuration_basename",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(cartographer_ros_msgs__srv__StartTrajectory_Request, configuration_basename),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "use_initial_pose",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(cartographer_ros_msgs__srv__StartTrajectory_Request, use_initial_pose),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "initial_pose",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(cartographer_ros_msgs__srv__StartTrajectory_Request, initial_pose),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "relative_to_trajectory_id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(cartographer_ros_msgs__srv__StartTrajectory_Request, relative_to_trajectory_id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers cartographer_ros_msgs__srv__StartTrajectory_Request__rosidl_typesupport_introspection_c__StartTrajectory_Request_message_members = {
  "cartographer_ros_msgs__srv",  // message namespace
  "StartTrajectory_Request",  // message name
  5,  // number of fields
  sizeof(cartographer_ros_msgs__srv__StartTrajectory_Request),
  cartographer_ros_msgs__srv__StartTrajectory_Request__rosidl_typesupport_introspection_c__StartTrajectory_Request_message_member_array,  // message members
  cartographer_ros_msgs__srv__StartTrajectory_Request__rosidl_typesupport_introspection_c__StartTrajectory_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  cartographer_ros_msgs__srv__StartTrajectory_Request__rosidl_typesupport_introspection_c__StartTrajectory_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t cartographer_ros_msgs__srv__StartTrajectory_Request__rosidl_typesupport_introspection_c__StartTrajectory_Request_message_type_support_handle = {
  0,
  &cartographer_ros_msgs__srv__StartTrajectory_Request__rosidl_typesupport_introspection_c__StartTrajectory_Request_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_cartographer_ros_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, cartographer_ros_msgs, srv, StartTrajectory_Request)() {
  cartographer_ros_msgs__srv__StartTrajectory_Request__rosidl_typesupport_introspection_c__StartTrajectory_Request_message_member_array[3].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geometry_msgs, msg, Pose)();
  if (!cartographer_ros_msgs__srv__StartTrajectory_Request__rosidl_typesupport_introspection_c__StartTrajectory_Request_message_type_support_handle.typesupport_identifier) {
    cartographer_ros_msgs__srv__StartTrajectory_Request__rosidl_typesupport_introspection_c__StartTrajectory_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &cartographer_ros_msgs__srv__StartTrajectory_Request__rosidl_typesupport_introspection_c__StartTrajectory_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "cartographer_ros_msgs/srv/detail/start_trajectory__rosidl_typesupport_introspection_c.h"
// already included above
// #include "cartographer_ros_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "cartographer_ros_msgs/srv/detail/start_trajectory__functions.h"
// already included above
// #include "cartographer_ros_msgs/srv/detail/start_trajectory__struct.h"


// Include directives for member types
// Member `status`
#include "cartographer_ros_msgs/msg/status_response.h"
// Member `status`
#include "cartographer_ros_msgs/msg/detail/status_response__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void cartographer_ros_msgs__srv__StartTrajectory_Response__rosidl_typesupport_introspection_c__StartTrajectory_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  cartographer_ros_msgs__srv__StartTrajectory_Response__init(message_memory);
}

void cartographer_ros_msgs__srv__StartTrajectory_Response__rosidl_typesupport_introspection_c__StartTrajectory_Response_fini_function(void * message_memory)
{
  cartographer_ros_msgs__srv__StartTrajectory_Response__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember cartographer_ros_msgs__srv__StartTrajectory_Response__rosidl_typesupport_introspection_c__StartTrajectory_Response_message_member_array[2] = {
  {
    "status",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(cartographer_ros_msgs__srv__StartTrajectory_Response, status),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "trajectory_id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(cartographer_ros_msgs__srv__StartTrajectory_Response, trajectory_id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers cartographer_ros_msgs__srv__StartTrajectory_Response__rosidl_typesupport_introspection_c__StartTrajectory_Response_message_members = {
  "cartographer_ros_msgs__srv",  // message namespace
  "StartTrajectory_Response",  // message name
  2,  // number of fields
  sizeof(cartographer_ros_msgs__srv__StartTrajectory_Response),
  cartographer_ros_msgs__srv__StartTrajectory_Response__rosidl_typesupport_introspection_c__StartTrajectory_Response_message_member_array,  // message members
  cartographer_ros_msgs__srv__StartTrajectory_Response__rosidl_typesupport_introspection_c__StartTrajectory_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  cartographer_ros_msgs__srv__StartTrajectory_Response__rosidl_typesupport_introspection_c__StartTrajectory_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t cartographer_ros_msgs__srv__StartTrajectory_Response__rosidl_typesupport_introspection_c__StartTrajectory_Response_message_type_support_handle = {
  0,
  &cartographer_ros_msgs__srv__StartTrajectory_Response__rosidl_typesupport_introspection_c__StartTrajectory_Response_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_cartographer_ros_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, cartographer_ros_msgs, srv, StartTrajectory_Response)() {
  cartographer_ros_msgs__srv__StartTrajectory_Response__rosidl_typesupport_introspection_c__StartTrajectory_Response_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, cartographer_ros_msgs, msg, StatusResponse)();
  if (!cartographer_ros_msgs__srv__StartTrajectory_Response__rosidl_typesupport_introspection_c__StartTrajectory_Response_message_type_support_handle.typesupport_identifier) {
    cartographer_ros_msgs__srv__StartTrajectory_Response__rosidl_typesupport_introspection_c__StartTrajectory_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &cartographer_ros_msgs__srv__StartTrajectory_Response__rosidl_typesupport_introspection_c__StartTrajectory_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "cartographer_ros_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "cartographer_ros_msgs/srv/detail/start_trajectory__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers cartographer_ros_msgs__srv__detail__start_trajectory__rosidl_typesupport_introspection_c__StartTrajectory_service_members = {
  "cartographer_ros_msgs__srv",  // service namespace
  "StartTrajectory",  // service name
  // these two fields are initialized below on the first access
  NULL,  // request message
  // cartographer_ros_msgs__srv__detail__start_trajectory__rosidl_typesupport_introspection_c__StartTrajectory_Request_message_type_support_handle,
  NULL  // response message
  // cartographer_ros_msgs__srv__detail__start_trajectory__rosidl_typesupport_introspection_c__StartTrajectory_Response_message_type_support_handle
};

static rosidl_service_type_support_t cartographer_ros_msgs__srv__detail__start_trajectory__rosidl_typesupport_introspection_c__StartTrajectory_service_type_support_handle = {
  0,
  &cartographer_ros_msgs__srv__detail__start_trajectory__rosidl_typesupport_introspection_c__StartTrajectory_service_members,
  get_service_typesupport_handle_function,
};

// Forward declaration of request/response type support functions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, cartographer_ros_msgs, srv, StartTrajectory_Request)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, cartographer_ros_msgs, srv, StartTrajectory_Response)();

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_cartographer_ros_msgs
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, cartographer_ros_msgs, srv, StartTrajectory)() {
  if (!cartographer_ros_msgs__srv__detail__start_trajectory__rosidl_typesupport_introspection_c__StartTrajectory_service_type_support_handle.typesupport_identifier) {
    cartographer_ros_msgs__srv__detail__start_trajectory__rosidl_typesupport_introspection_c__StartTrajectory_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)cartographer_ros_msgs__srv__detail__start_trajectory__rosidl_typesupport_introspection_c__StartTrajectory_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, cartographer_ros_msgs, srv, StartTrajectory_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, cartographer_ros_msgs, srv, StartTrajectory_Response)()->data;
  }

  return &cartographer_ros_msgs__srv__detail__start_trajectory__rosidl_typesupport_introspection_c__StartTrajectory_service_type_support_handle;
}
