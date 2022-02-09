#! /usr/bin/env python3
from antigravity import geohash
from turtle import pu
import rospy
from geometry_msgs.msg import Pose
import time
from math import sin, cos
# Vai importar todos os srv do dobot
from dobot.srv import *

if __name__ == "__main__":
    rospy.init_node('pick_and_place', anonymous=True)
    
    suction_srv = rospy.ServiceProxy('suction_srv', SetEndEffectorSuctionCup)

    publisher = rospy.Publisher('geometry_pose', Pose, queue_size=10)
    # subscriber = rospy.Subscriber

    print("Say where the object is positioned in the table")
    x = int(input("X axis: "))
    y = int(input("Y axis: "))
    z = int(input("Z axis: "))

    # print()

    freq = rospy.Rate(10)

    while not rospy.is_shutdown():
        msg = Pose()

        msg.position.x = x
        msg.position.y = y
        msg.position.z = z
        publisher.publish(msg)

        # abre e fecha a garra

        msg.position.x = 0
        msg.position.y = 0
        msg.position.z = 0
        publisher.publish(msg)

        # abre a garra

        freq.sleep()

        break


