cmake_minimum_required(VERSION 3.8)
project(cpp_pkg)

if(CMAKE_COMPILER_IS_GNUCXX OR CMAKE_CXX_COMPILER_ID MATCHES "Clang")
  add_compile_options(-Wall -Wextra -Wpedantic)
endif()

# find dependencies
find_package(ament_cmake REQUIRED)
find_package(rclcpp REQUIRED)

#添加依赖包时需要手动加入（1）
find_package(std_msgs REQUIRED)

# uncomment the following section in order to fill in
# further dependencies manually.
# find_package(<dependency> REQUIRED)

if(BUILD_TESTING)
  find_package(ament_lint_auto REQUIRED)
  # the following line skips the linter which checks for copyrights
  # comment the line when a copyright and license is added to all source files
  set(ament_cmake_copyright_FOUND TRUE)
  # the following line skips cpplint (only works in a git repo)
  # comment the line when this package is in a git repo and when
  # a copyright and license is added to all source files
  set(ament_cmake_cpplint_FOUND TRUE)
  ament_lint_auto_find_test_dependencies()
endif()

ament_package()
#增加一个可执行节点的操作1（必须分加），且依赖包修改时需要加入可运行依赖名(3)
add_executable(qq_node src/qq_node.cpp)
add_executable(tx_qq_node src/tx_qq_node.cpp)
add_executable(node_template_node src/node_template_node.cpp)
ament_target_dependencies(qq_node 
rclcpp
std_msgs
)
ament_target_dependencies(tx_qq_node 
rclcpp
std_msgs
)
ament_target_dependencies(node_template_node
rclcpp
std_msgs
)
#每个单个节点是独立的

#下面这个可以在括号里用换行（写多个）,可执行节点要加2
install(TARGETS
  qq_node
  tx_qq_node
  node_template_node
  DESTINATION lib/${PROJECT_NAME}
)

