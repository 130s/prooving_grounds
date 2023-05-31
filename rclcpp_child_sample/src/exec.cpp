#include <rclcpp/rclcpp.hpp>

#include <rclcpp_sample/child1.hpp>

int main(int argc, char *argv[])
{
  rclcpp::init(argc, argv);

  auto app = std::make_shared<rclcpp_sample::DerivedModule>("app_exec");

  rclcpp::executors::MultiThreadedExecutor executor;
  executor.add_node(app);
  std::thread([&executor]() { executor.spin(); }).detach();
  app->func_to_be_overridden();
  rclcpp::shutdown();
}
