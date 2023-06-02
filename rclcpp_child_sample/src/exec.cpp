#include <rclcpp/rclcpp.hpp>
#include <string>

#include <rclcpp_sample/base.hpp>
#include <rclcpp_sample/child1.hpp>

int main(int argc, char *argv[])
{
  rclcpp::init(argc, argv);

  std::string nodename_ = "app";
  //auto app = std::make_shared<rclcpp_sample::DerivedModule>("app_exec");
  //auto app = std::make_shared<rclcpp_sample::DerivedModule>(rclcpp_sample::DerivedModule("app_exec"));
  //std::shared_ptr<rclcpp_sample::DerivedModule> app(new rclcpp_sample::DerivedModule("foo"));
  //std::make_shared<rclcpp_sample::DerivedModule> app(new rclcpp_sample::DerivedModule("foo"));
  //std::shared_ptr<rclcpp_sample::DerivedModule> app(new rclcpp_sample::DerivedModule("foo"));
  //std::shared_ptr<rclcpp_sample::DerivedModule> app(new rclcpp_sample::DerivedModule("foo"));
  //std::shared_ptr<rclcpp_sample::DerivedModule> app(new rclcpp_sample::DerivedModule());
  auto app = std::make_shared<rclcpp_sample::DerivedModule>();
  //auto app = std::make_unique<rclcpp_sample::DerivedModule>();

  rclcpp::executors::MultiThreadedExecutor executor;
  executor.add_node(app);
  std::thread([&executor]() { executor.spin(); }).detach();
  RCLCPP_INFO(rclcpp::get_logger("exec_rclcpp_sample"),
              "func_to_be_overridden: %d", app->func_to_be_overridden());
  rclcpp::shutdown();
}
