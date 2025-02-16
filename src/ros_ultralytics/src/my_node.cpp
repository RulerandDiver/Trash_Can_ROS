#include <ros/ros.h>

int main(int argc, char** argv) {
  ros::init(argc, argv, "my_cpp_node");
  ros::NodeHandle nh;
  ROS_INFO("My C++ node is running!");
  ros::spin();
  return 0;
}
