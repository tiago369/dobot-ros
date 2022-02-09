#! /usr/bin/env python
from numpy import uint8
import rospy
from geometry_msgs.msg import Pose
import time
from math import sin, cos

if __name__ == "__main__":
    rospy.init_node('suction_test', anonymous=True)
    suction_srv = rospy.ServiceProxy('suction_srv', SetEndEffectorSuctionCup)

    x = uint8(input('Put value:  '))

    freq = rospy.Rate(10)

    while not rospy.is_shutdown():
        resp = suction_srv(1, x, True)
        print()
        resp.result
        freq.sleep()

        break