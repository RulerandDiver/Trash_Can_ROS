#!/usr/bin/env python3
"""
    ����: ʵ�ֻ����Ļ���ͨ�ţ�һ���������ݣ�һ���������ݣ�
         ʵ�ֵĹؼ���:
         1.���ͷ�
         2.���շ�
         3.����(�˴�Ϊ��ͨ�ı�)

         PS: ������Ҫ������ͬ�Ļ���


    ��Ϣ������:
        ѭ��������Ϣ:HelloWorld ��׺���ֱ��

    ʵ������:
        1.���� 
        2.��ʼ�� ROS �ڵ�:����(Ψһ)
        3.ʵ���� ������ ����
        4.��֯�����������ݣ�����д�߼���������


"""
#1.���� 
import rospy
from std_msgs.msg import String

if __name__ == "__main__":
    #2.��ʼ�� ROS �ڵ�:����(Ψһ)
    rospy.init_node("talker_p")
    #3.ʵ���� ������ ����
    pub = rospy.Publisher("chatter",String,queue_size=10)
    #4.��֯�����������ݣ�����д�߼���������
    msg = String()  #���� msg ����
    msg_front = "hello ���"
    count = 0  #������ 
    # ����ѭ��Ƶ��
    rate = rospy.Rate(1)
    while not rospy.is_shutdown():

        #ƴ���ַ���
        msg.data = msg_front + str(count)

        pub.publish(msg)
        rate.sleep()
        rospy.loginfo("д��������:%s",msg.data)
        count += 1