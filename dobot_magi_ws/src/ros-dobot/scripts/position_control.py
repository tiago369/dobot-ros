#!/usr/bin/env python
from turtle import pu
import rospy
from geometry_msgs.msg import Pose
import time
from math import sin, cos

if __name__ == "__main__":
    rospy.init_node('position_control', anonymous=True)
    publisher = rospy.Publisher('geometry_pose', Pose, queue_size=10)

    print("Say where you want me to go")
    x = int(input("X axis: "))
    y = int(input("Y axis: "))
    z = int(input("Z axis: "))

    freq = rospy.Rate(10)

    while not rospy.is_shutdown():
        msg = Pose()
        
        msg.position.x = x
        msg.position.y = y
        msg.position.z = z
        publisher.publish(msg)

        freq.sleep()
