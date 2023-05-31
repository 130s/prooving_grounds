#ifndef RCLCPP_SAMPLE__CHILD1_HPP_
#define RCLCPP_SAMPLE__CHILD1_HPP_

#include <string>

#include <rclcpp_sample/base.hpp>

namespace rclcpp_sample
{

class DerivedModule : public BaseModules::BaseModules
{
public:
  explicit DerivedModule(std::string nodename);
  ~DerivedModule();

  bool func_to_be_overridden();
};
}  // namespace rclcpp_sample

#endif  // RCLCPP_SAMPLE__CHILD1_HPP_
