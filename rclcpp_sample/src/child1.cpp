#include <rclcpp_sample/child1.hpp>

using namespace rclcpp_sample;

//DerivedModule::DerivedModule(const std::string& nodename)
DerivedModule::DerivedModule()
: BaseModules()
{
  RCLCPP_INFO(get_logger(), "Construtor of DerivedModule class.");
}

bool DerivedModule::func_to_be_overridden()
{
  return true;
}
