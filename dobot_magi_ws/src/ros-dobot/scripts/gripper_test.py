#! /usr/bin/env python
from numpy import uint8
import rospy
from dobot.srv import SetEndEffectorGripper

if __name__ == "__main__":
    rospy.init_node('suction_test', anonymous=True)
    suction_srv = rospy.ServiceProxy('DobotServer/SetEndEffectorGripper', SetEndEffectorGripper)

    x = uint8(input('Put value:  '))

    freq = rospy.Rate(10)

    while not rospy.is_shutdown():
        resp = suction_srv(1, x, False)
        print(resp.result)
        resp.result
        freq.sleep()
