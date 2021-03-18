//
// Created by Mateusz on 06.08.2020.
//

#include "Player.h"
#include "functions.h"

//Constructor
Player::Player(float cX, float cY, float cZ, float cStepXY,float cStepZ, float cTiltStep, float cHeadingAngle, float cRotationStep)
    : Entity(cX,cY,cZ,cStepXY,cStepZ), headingAngle(cHeadingAngle), rotationStep(cRotationStep), tiltStep(cTiltStep), speedZ(0)
{
}

//Destructor
Player::~Player()
{
}

//Setter
void Player::setHeadingAngle(float newHeadingAngle)
{
    headingAngle = newHeadingAngle;
}

void Player::setSpeedZ(float newSpeedZ)
{
    speedZ = newSpeedZ;
}

//Getter
const float &Player::getHeadingAngle() const
{
    return headingAngle;
}

const float &Player::getRotationStep() const
{
    return rotationStep;
}

const float &Player::getTiltStep() const
{
    return tiltStep;
}

const float &Player::getSpeedZ() const
{
    return speedZ;
}