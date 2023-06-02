#include <rclcpp/rclcpp.hpp>
#include <string>

#include <rclcpp_sample/shapes.hpp>

using namespace rclcpp_sample;

int main(int argc, char *argv[])
{
  rclcpp::init(argc, argv);

  // base class pointer
  Shape *S;
  Rectangle r;

  // initialization of reference variable
  S = &r;

  // calling of Rectangle function
  S->calculate();
  Square sq;

  // initialization of reference variable
  S = &sq;

  // calling of Square function
  S->calculate();

  // return 0 to tell the program executed
  // successfully
  return 0;
}
