#!/usr/bin/env python
from turtle import pu
import rospy
from geometry_msgs.msg import Pose
import time
from dobot.srv import GetPose
import math

def distancia(ini, fim):
    return math.sqrt((fim - math.sqrt((ini)**2))**2)

def position():
    rospy.init_node('position_control', anonymous=True)
    publisher = rospy.Publisher('geometry_pose', Pose, queue_size=10)
    get_pose = rospy.ServiceProxy('DobotServer/GetPose', GetPose)


    print("Say where you want me to go")
    x = int(input("X axis: "))
    y = int(input("Y axis: "))
    z = int(input("Z axis: "))

    freq = rospy.Rate(0.5)
    dist = 1

    k = 10

    while dist >= 0.1:
        print('a')
        msg = Pose()
        pose = get_pose()
        
        msg.position.x = k * distancia(pose.x, x)
        msg.position.y = k * distancia(pose.y, y)
        msg.position.z = k * distancia(pose.z, z)
        publisher.publish(msg)

        dist = (distancia(pose.x, x) + distancia(pose.z, z) + distancia(pose.y, y)) / 3

        freq.sleep()

if __name__ == "__main__":
    try:
        position()
    except rospy.ROSInterruptException:
        pass