cmake_minimum_required(VERSION 3.8)
project(rclcpp_sample)

if(CMAKE_COMPILER_IS_GNUCXX OR CMAKE_CXX_COMPILER_ID MATCHES "Clang")
  add_compile_options(-Wall -Wextra -Wpedantic)
endif()

# BEGIN: From ROS2 tutorial https://docs.ros.org/en/galactic/Tutorials/Beginner-Client-Libraries/Writing-A-Simple-Cpp-Publisher-And-Subscriber.html
if(NOT CMAKE_CXX_STANDARD)
  set(CMAKE_CXX_STANDARD 17)
endif()
if(CMAKE_COMPILER_IS_GNUCXX OR CMAKE_CXX_COMPILER_ID MATCHES "Clang")
  add_compile_options(-Wall -Wextra -Wpedantic)
endif()
# END From ROS2 tutorial

set(THIS_PACKAGE_INCLUDE_DEPENDS
  ament_cmake
  rclcpp 
)
foreach(Dependency IN ITEMS ${THIS_PACKAGE_INCLUDE_DEPENDS})
  find_package(${Dependency} REQUIRED)
endforeach()

add_library(${PROJECT_NAME} SHARED
  src/base.cpp
  src/child1.cpp
)
target_include_directories(
  ${PROJECT_NAME}
  PUBLIC
    $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
    $<INSTALL_INTERFACE:include>)
ament_target_dependencies(${PROJECT_NAME} ${THIS_PACKAGE_INCLUDE_DEPENDS})
ament_export_include_directories(include)

install(DIRECTORY include/
  DESTINATION include
)
install(
  TARGETS ${PROJECT_NAME}
  EXPORT ${PROJECT_NAME}Targets
  INCLUDES DESTINATION include
  RUNTIME DESTINATION bin
  LIBRARY DESTINATION lib
  ARCHIVE DESTINATION lib
)

# exec
#set(app_derived app_derived)
#add_executable(${app_derived} src/exec.cpp)
#target_include_directories(${app_derived}
#  PUBLIC $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
#  PUBLIC $<INSTALL_INTERFACE:include>)
#ament_target_dependencies(${app_derived} ${THIS_PACKAGE_INCLUDE_DEPENDS})
#install(TARGETS ${app_derived} RUNTIME DESTINATION lib/${PROJECT_NAME})

ament_package()
