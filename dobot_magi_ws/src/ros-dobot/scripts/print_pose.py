#!/usr/bin/env python
import rospy

from dobot.srv import GetPose

if __name__ == '__main__':
    print('1')
    # rospy.wait_for_service('print_pose')
    get_pose = rospy.ServiceProxy('DobotServer/GetPose', GetPose)
    print('2')


    try:
        print('a')
        print(get_pose())
        print('b')
    except rospy.ServiceException as exc:
        print("Service did not process request: " + str(exc))

    var = get_pose()
    print(var.x)

    # while not rospy.is_shutdown():
    #     [rr, x, y, z, r, j] = get_pose()

    #     print(x)
    #     print(get_pose.x)
    #     print(z)
