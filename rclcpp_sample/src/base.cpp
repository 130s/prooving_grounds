#include <rclcpp_sample/base.hpp>

using namespace rclcpp_sample;

//BaseModules::BaseModules(const std::string& nodename)
BaseModules::BaseModules()
    : rclcpp::Node("base_app")
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
