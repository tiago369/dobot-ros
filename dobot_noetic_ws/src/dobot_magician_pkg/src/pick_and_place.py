#! /usr/bin/env python3
import rospy
import geometry_msgs.msg

if __name__ == "__main__":
    rospy.init_node('pick_and_place', anonymous=True)

    print("Say where the object is positioned in the")
    print("X axis: ")
    print("Y axis: ")
    print("Z axis: ")

    while not rospy.is_shutdown():
        if dist <= 0.1:
            pass