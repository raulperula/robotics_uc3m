#ifndef MY_ROBOT_H_
#define MY_ROBOT_H_

/**
 * @file    MyRobot.h
 * @brief   Controller example for a robot to avoid obstacles.
 *
 * @author  Raul Perula-Martinez <raul.perula@uc3m.es>
 * @date    2014-11
 */

#include <iostream>
#include <webots/DifferentialWheels.hpp>

using namespace std;
using namespace webots;

#define NUM_DISTANCE_SENSOR 2
#define DISTANCE_LIMIT      100
#define MAX_SPEED           30

class MyRobot : public DifferentialWheels {
    public:
        /**
         * @brief Empty constructor of the class.
         */
        MyRobot();
        
        /**
         * @brief Destructor of the class.
         */
        ~MyRobot();

        /**
         * @brief Function with the logic of the controller.
         * @param
         * @return
         */
        void run();
        
    private:
        int _time_step;
        
        // velocities
        double _left_speed, _right_speed;

        // sensors
        DistanceSensor * _distance_sensor[NUM_DISTANCE_SENSOR];

        // working modes
        enum Mode {
            STOP,
            FORWARD,
            TURN_LEFT,
            TURN_RIGHT,
            OBSTACLE_AVOID
        };

        Mode _mode;
};

#endif

