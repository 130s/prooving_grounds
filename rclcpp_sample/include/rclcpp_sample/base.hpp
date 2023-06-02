#ifndef RCLCPP_SAMPLE__BASE_HPP_
#define RCLCPP_SAMPLE__BASE_HPP_

#include <ament_index_cpp/get_package_share_directory.hpp>
#include <unistd.h>
#include <rclcpp/rclcpp.hpp>
#include <string>

namespace rclcpp_sample
{

class BaseModules : public rclcpp::Node
{
public:
  BaseModules(const std::string& nodename);
  virtual ~BaseModules();

  virtual bool func_to_be_overridden();
};
}  // namespace rclcpp_sample

#endif  //RCLCPP_SAMPLE__BASE_HPP_
