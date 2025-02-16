#!/usr/bin/env python3
"""
    ����: ʵ�ֻ����Ļ���ͨ�ţ�һ���������ݣ�һ���������ݣ�
         ʵ�ֵĹؼ���:
         1.���ͷ�
         2.���շ�
         3.����(�˴�Ϊ��ͨ�ı�)


    ��Ϣ���ķ�:
        ���Ļ��Ⲣ��ӡ���յ�����Ϣ

    ʵ������:
        1.���� 
        2.��ʼ�� ROS �ڵ�:����(Ψһ)
        3.ʵ���� ������ ����
        4.�������ĵ���Ϣ(�ص�����)
        5.����ѭ�����ûص�����



"""
#1.���� 
import rospy
from std_msgs.msg import String

def doMsg(msg):
    rospy.loginfo("I heard:%s",msg.data)

if __name__ == "__main__":
    #2.��ʼ�� ROS �ڵ�:����(Ψһ)
    rospy.init_node("listener_p")
    #3.ʵ���� ������ ����
    sub = rospy.Subscriber("chatter",String,doMsg,queue_size=10)
    #4.�������ĵ���Ϣ(�ص�����)
    #5.����ѭ�����ûص�����
    rospy.spin()