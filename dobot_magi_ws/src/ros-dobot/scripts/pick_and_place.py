#!/usr/bin/env python
import rospy
from geometry_msgs.msg import Pose

# Vai importar todos os srv do dobot
from dobot.srv import SetEndEffectorSuctionCup
from dobot.srv import GetPose
from dobot.srv import SetHOMEParams

if __name__ == "__main__":
    rospy.init_node('pick_and_place', anonymous=True)
    print('1')
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
    print('The actual pose is')
    print('X: ', ini_x)
    print('Y: ', ini_y)
    print('Z: ', ini_z)

    print()

    print("Say where the object is positioned in the table")
    x = int(input("X axis: "))
    y = int(input("Y axis: "))
    z = int(input("Z axis: "))
    x = pose.x
    z = pose.z

    print('a')

    freq = rospy.Rate(10)

    while not rospy.is_shutdown():
        msg = Pose()
        print('b')
        resp = suction_srv(1, 0, False)
        print('c')

        print('Move ate o ponto para pegar o objeto')
        dist = 1
        while dist >= 1 or not rospy.is_shutdown():
            msg.position.x = x
            msg.position.y = y
            msg.position.z = z
            publisher.publish(msg)
            dist = ((x - pose.x) + (y - pose.y) + (z - pose.z))/3

        print('Suga')
        resp = suction_srv(1, 1, False)

        dist = 1
        print('Move ate o ponto inicial')
        while dist >= 1 or not rospy.is_shutdown():
            msg.position.x = 0
            msg.position.y = 0
            msg.position.z = 0
            publisher.publish(msg)
            dist = ((x - pose.x) + (y - pose.y) + (z - pose.z))/3

        print('Para de sugar')
        resp = suction_srv(1, 0, False)

        freq.sleep()

        break


