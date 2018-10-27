cmake_minimum_required(VERSION 2.8.3)
project(foo)

find_package(catkin REQUIRED)

catkin_package(
)

if (CATKIN_ENABLE_TESTING)
    find_package(catkin REQUIRED COMPONENTS rostest)
    add_rostest(test/foo.test)
    add_rostest(test/baa.test)
endif()
