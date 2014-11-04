/**
 * @file    wall_follower_example.cpp
 * @brief   Controller example for a robot to follow walls.
 *
 * @author  Raul Perula-Martinez <raul.perula@uc3m.es>
 * @date    2014-11
 */

#include "MyRobot.h"

/**
 * @brief Main program.
 */
int main(int argc, char **argv)
{
    MyRobot* my_robot = new MyRobot();

    my_robot->run();

    delete my_robot;

    return 0;
}
