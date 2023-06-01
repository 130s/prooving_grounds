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
foreach(dependency IN ITEMS ${THIS_PACKAGE_INCLUDE_DEPENDS})
  find_package(${dependency} REQUIRED)
endforeach()

set(app_derived app_derived)
add_executable(${app_derived} src/exec.cpp)
#target_include_directories(${app_derived}
#  PUBLIC $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
#  PUBLIC $<INSTALL_INTERFACE:include>)
ament_target_dependencies(${app_derived} ${THIS_PACKAGE_INCLUDE_DEPENDS})
install(TARGETS ${app_derived} RUNTIME DESTINATION lib/${PROJECT_NAME})

ament_package()
