#!/usr/bin/env python
# -*- coding: utf-8 -*-
import rospy
from geometry_msgs.msg import Pose

# Vai importar todos os srv do dobot
from dobot.srv import SetEndEffectorSuctionCup
from dobot.srv import GetPose
from dobot.srv import SetHOMEParams

if __name__ == "__main__":
    rospy.init_node('pick_and_place', anonymous=True)
    suction_srv = rospy.ServiceProxy('DobotServer/SetEndEffectorSuctionCup', SetEndEffectorSuctionCup)
    get_pose = rospy.ServiceProxy('DobotServer/GetPose', GetPose)
    set_home = rospy.ServiceProxy('DobotServer/SetHOMEParams', SetHOMEParams)
    publisher = rospy.Publisher('geometry_pose', Pose, queue_size=10)
    # subscriber = rospy.Subscriber
    
    pose = get_pose()
    home = set_home(0, 0, 0, 0, False)
    ini_x = pose.x
    ini_y = pose.y
    ini_z = pose.z
    
    print('a')
    # Valores arbitrarios para delimitar a area de atuação do robo
    while True:
        print('The actual pose is')
        print('X: ')
        print(pose.x)
        print('Y: ')
        print(pose.y)
        print('Z: ')
        print(pose.z)
        print()

        print("Say where the object is positioned in the table")
        x = int(input("X axis: "))
        y = int(input("Y axis: "))
        z = int(input("Z axis: "))
        if 0 <= x > 200:
            print('X value is not acceptable')
        elif -100 < y > 100:
            print('Y value is not acceptable')
        elif -100 < z > 100:
            print('Z value is not acceptable')
        else:
            break

    freq = rospy.Rate(10)

    while not rospy.is_shutdown():
        msg = Pose()
        resp = suction_srv(1, 0, False)

        print('Move ate o ponto para pegar o objeto')
        # dist = 1
        while (pose.x != x and pose.y != y and pose.z != z) or not rospy.is_shutdown():
            msg.position.x = x
            msg.position.y = y
            msg.position.z = z
            publisher.publish(msg)
            # dist = ((x - pose.x) + (y - pose.y) + (z - pose.z))/3

            

        print('Suga')
        resp = suction_srv(1, 254, False)

        # dist = 1
        print('Move ate o ponto inicial')
        while (pose.x != ini_x and pose.y != ini_y and pose.z != ini_z) or not rospy.is_shutdown():
            msg.position.x = ini_x
            msg.position.y = ini_y
            msg.position.z = ini_z
            publisher.publish(msg)
            dist = ((x - pose.x) + (y - pose.y) + (z - pose.z))/3

        print('Para de sugar')
        resp = suction_srv(1, 0, False)

        freq.sleep()

        break


