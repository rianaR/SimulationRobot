#include "CommandeRobot.h"


using namespace std;

CommandeRobot::CommandeRobot(Invocateur *invoc) : {
    _robot = invoc->getRobot();
}