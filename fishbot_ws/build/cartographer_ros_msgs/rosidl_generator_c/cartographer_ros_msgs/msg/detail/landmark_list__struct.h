// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from cartographer_ros_msgs:msg/LandmarkList.idl
// generated code does not contain a copyright notice

#ifndef CARTOGRAPHER_ROS_MSGS__MSG__DETAIL__LANDMARK_LIST__STRUCT_H_
#define CARTOGRAPHER_ROS_MSGS__MSG__DETAIL__LANDMARK_LIST__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.h"
// Member 'landmarks'
#include "cartographer_ros_msgs/msg/detail/landmark_entry__struct.h"

/// Struct defined in msg/LandmarkList in the package cartographer_ros_msgs.
/**
  * Copyright 2018 The Cartographer Authors
  *
  * Licensed under the Apache License, Version 2.0 (the "License");
  * you may not use this file except in compliance with the License.
  * You may obtain a copy of the License at
  *
  *      http://www.apache.org/licenses/LICENSE-2.0
  *
  * Unless required by applicable law or agreed to in writing, software
  * distributed under the License is distributed on an "AS IS" BASIS,
  * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
  * See the License for the specific language governing permissions and
  * limitations under the License.
 */
typedef struct cartographer_ros_msgs__msg__LandmarkList
{
  std_msgs__msg__Header header;
  cartographer_ros_msgs__msg__LandmarkEntry__Sequence landmarks;
} cartographer_ros_msgs__msg__LandmarkList;

// Struct for a sequence of cartographer_ros_msgs__msg__LandmarkList.
typedef struct cartographer_ros_msgs__msg__LandmarkList__Sequence
{
  cartographer_ros_msgs__msg__LandmarkList * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} cartographer_ros_msgs__msg__LandmarkList__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // CARTOGRAPHER_ROS_MSGS__MSG__DETAIL__LANDMARK_LIST__STRUCT_H_
