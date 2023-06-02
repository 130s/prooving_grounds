#ifndef RCLCPP_SAMPLE__SHAPES_HPP_
#define RCLCPP_SAMPLE__SHAPES_HPP_

#include <ament_index_cpp/get_package_share_directory.hpp>
#include <unistd.h>
#include <string>

namespace rclcpp_sample
{

// Declaration of Base class
class Shape
{
public:
  // Usage of virtual constructor
  virtual void calculate();
  // usage of virtual Destuctor to avoid memory leak
  virtual ~Shape();
};

// Declaration of Derived class
class Rectangle : public Shape
{
public:
  int width, height, area;

  void calculate();

  // Virtual Destuctor for every Derived class
  virtual ~Rectangle();
};

// Declaration of 2nd derived class
class Square : public Shape
{
public:
  int side, area;

  void calculate();
// Virtual Destuctor for every Derived class
  virtual ~Square();
};

}  // namespace rclcpp_sample

#endif  //RCLCPP_SAMPLE__SHAPES_HPP_
