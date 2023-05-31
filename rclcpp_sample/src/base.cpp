#include <rclcpp_sample/base.hpp>

using namespace rclcpp_sample;

BaseModules::BaseModules(std::string nodename)
    : Node(nodename)
{
  RCLCPP_INFO(this->get_logger(), "Initialization.");
}

BaseModules::~BaseModules()
{
  RCLCPP_INFO(this->get_logger(), "Deconstruction.");
}

bool BaseModules::func_to_be_overridden()
{
  return false;
}
