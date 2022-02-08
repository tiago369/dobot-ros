#! /usr/bin/env python3
import rospy
import geometry_msgs.msg

if __name__ == "__main__":
    rospy.init_node('pick_and_place', anonymous=True)
    publisher = rospy.Publisher()
    subscriber = rospy.Subscriber()

    print("Say where the object is positioned in the")
    print("X axis: ")
    print("Y axis: ")
    print("Z axis: ")

    freq = rospy.Rate(10)

    while not rospy.is_shutdown():

        freq.sleep()
        if dist <= 0.1:
            pass