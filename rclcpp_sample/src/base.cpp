#include <rclcpp_sample/base.hpp>
#include <rclcpp_sample/child1.hpp>

using namespace rclcpp_sample;

//BaseModules::BaseModules(const std::string& nodename)
BaseModules::BaseModules() :
    rclcpp::Node("base_app")
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

DerivedModule::DerivedModule() :
    BaseModules()
{
  RCLCPP_INFO(get_logger(), "Construtor of DerivedModule class.");
}

DerivedModule::~DerivedModule()
{
}

bool DerivedModule::func_to_be_overridden()
{
  return true;
}
