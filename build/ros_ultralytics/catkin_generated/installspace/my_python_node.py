#!/usr/bin/env python3
import rospy

if __name__ == '__main__':
    rospy.init_node('my_python_node')
    rospy.loginfo("My Python node is running!")
    rospy.spin()
