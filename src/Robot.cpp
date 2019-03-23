#include <Robot.h>

Robot* Robot::m_instance;

Robot::Robot() {
    m_instance = this;
    SetPeriod(1/60.0);
}

void Robot::robotInit() {

}

void Robot::teleopInit() {

}

void Robot::teleop() {
   
}

void Robot::testInit() {

}

void Robot::test() {

}
Robot* Robot::GetInstance() {
	if(!m_instance) {
		CORELog::logError("Get instance returning null pointer!");
	}
	return m_instance;
}


START_ROBOT_CLASS(Robot)
