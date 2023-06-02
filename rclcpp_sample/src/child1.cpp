#include <rclcpp_sample/child1.hpp>

//DerivedModule::DerivedModule(const std::string& nodename)
rclcpp_sample::DerivedModule::DerivedModule()
: BaseModules()
{
  RCLCPP_INFO(get_logger(), "Construtor of DerivedModule class.");
}

bool rclcpp_sample::DerivedModule::func_to_be_overridden()
{
  return true;
}
