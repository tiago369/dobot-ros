#!/usr/bin/env python
from turtle import pu
import rospy
from geometry_msgs.msg import Pose
import time
from math import sin, cos

def instpose():
    global turtle_x, turtle_y, turtle_z
    turtle_x = xy.x
    turtle_y = xy.y
    turtle_z = xy.z

def distancia(ini, fim):
    return fim - sqrt((ini)**2)

def position():
    rospy.init_node('position_control', anonymous=True)
    publisher = rospy.Publisher('geometry_pose', Pose, queue_size=10)
    subs = rospy.Subscriber('geometry_pose', Pose, instpose)

    print("Say where you want me to go")
    x = int(input("X axis: "))
    y = int(input("Y axis: "))
    z = int(input("Z axis: "))

    freq = rospy.Rate(0.5)
    dist = 1

    while dist <= 0.1:
        msg = Pose()
        
        msg.position.x = x
        msg.position.y = y
        msg.position.z = z
        publisher.publish(msg)

        dist = (distancia(turtle_x, x) + distancia(turtle_z, z) + distancia(turtle_y, y)) / 3

        freq.sleep()

if __name__ == "__main__":
    try:
        position()
    except rospy.ROSInterruptException:
        pass