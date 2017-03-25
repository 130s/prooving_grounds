cmake_minimum_required(VERSION 2.8.3)
project(beginner_tutorials)

find_package(catkin REQUIRED COMPONENTS
  message_generation
  roscpp
  rospy
  std_msgs
)

add_message_files(DIRECTORY msg
  #  FILES Num.msg Num.msg
)

add_message_files(DIRECTORY msg/subfolder1)

generate_messages(
  DEPENDENCIES
  std_msgs
)

catkin_package(
#  INCLUDE_DIRS include
#  LIBRARIES beginner_tutorials
  CATKIN_DEPENDS message_runtime roscpp rospy std_msgs
#  DEPENDS system_lib
)

include_directories(
  ${catkin_INCLUDE_DIRS}
)

install(DIRECTORY script DESTINATION ${CATKIN_PACKAGE_BIN_DESTINATION})
install(DIRECTORY launch test DESTINATION ${CATKIN_PACKAGE_SHARE_DESTINATION})
