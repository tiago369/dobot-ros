#!/usr/bin/env python
import rospy
from dobot.srv import SetJOGCmd

def position():
    rospy.init_node('position_control_3', anonymous=True)
    jogcmd = rospy.ServiceProxy('DobotServer/SetJOGCmd', SetJOGCmd)
    
    
    # y = int(input("Y axis: "))
    # z = int(input("Z axis: "))
    
    while not rospy.is_shutdown():
        print("Say where you want me to go")
        x = int(input("X axis: "))
        result = jogcmd(False, x)
        result

if __name__ == "__main__":
    try:
        position()
    except rospy.ROSInterruptException:
        pass