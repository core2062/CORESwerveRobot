#pragma once

#include <WPILib.h>
#include "ctre/Phoenix.h"
#include <iostream>
#include "CORERobotLib.h"

#include "DriveSubsystem.h"

/************************* Motors *************************/
#define FRONT_RIGHT_STEER_PORT 11
#define FRONT_LEFT_STEER_PORT 12
#define BACK_RIGHT_STEER_PORT 13
#define BACK_LEFT_STEER_PORT 14
#define FRONT_RIGHT_DRIVE_PORT 15
#define FRONT_LEFT_DRIVE_PORT 16
#define BACK_RIGHT_DRIVE_PORT 17
#define BACK_LEFT_DRIVE_PORT 18

using namespace CORE;
using namespace std;

class Robot: public CORERobot {
private:
    static Robot *m_instance;

public:
	Robot();
    void robotInit() override;
    void teleopInit() override;
    void teleop() override;
    void test() override;
    void testInit() override;

    static Robot* GetInstance();
	DriveSubsystem driveSubsystem;

};
