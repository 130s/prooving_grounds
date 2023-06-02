cmake_minimum_required(VERSION 3.8)
project(rclcpp_child_sample)

if(CMAKE_COMPILER_IS_GNUCXX OR CMAKE_CXX_COMPILER_ID MATCHES "Clang")
  add_compile_options(-Wall -Wextra -Wpedantic)
endif()

set(THIS_PACKAGE_INCLUDE_DEPENDS
  ament_cmake
  rclcpp
  rclcpp_sample
)
foreach(dep IN ITEMS ${THIS_PACKAGE_INCLUDE_DEPENDS})
  find_package(${dep} REQUIRED)
endforeach()
find_package(rclcpp_sample REQUIRED)

set(app_derived app_derived)
add_executable(${app_derived} src/exec.cpp)
target_link_libraries(${app_derived} rclcpp_sample::rclcpp_sample)
ament_target_dependencies(${app_derived} ${THIS_PACKAGE_INCLUDE_DEPENDS})
install(TARGETS ${app_derived} RUNTIME DESTINATION lib/${PROJECT_NAME})

ament_package()
