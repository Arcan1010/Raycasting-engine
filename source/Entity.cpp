//
// Created by Mateusz on 06.08.2020.
//

#include "Entity.h"
#include "functions.h"

//Constructor
Entity::Entity(float cX, float cY, float cZ, float cStepXY, float cStepZ)
    : position(cX,cY,cZ), stepXY(cStepXY), stepZ(cStepZ)
{
}

//Destructor
Entity::~Entity()
{
}

//Setter
void Entity::setPosition(sf::Vector3f newPosition)
{
    position = newPosition;
}

void Entity::setLookingTilt(float newLookingTilt)
{
    lookingTilt = newLookingTilt;
}

//Getter
const sf::Vector3f &Entity::getPosition() const
{
    return position;
}

const float &Entity::getStepXY() const
{
    return stepXY;
}

const float &Entity::getStepZ() const
{
    return stepZ;
}

const float &Entity::getLookingTilt() const
{
    return lookingTilt;
}

//Methods
void Entity::moveForward(float headingAngle, float frameRate)
{
    position.x = position.x + stepXY * cos(gf::radians(headingAngle)) * 30/frameRate;
    position.y = position.y + stepXY * sin(gf::radians(headingAngle)) * 30/frameRate;
}

void Entity::moveBackward(float headingAngle, float frameRate)
{
    position.x = position.x - stepXY * cos(gf::radians(headingAngle)) * 30/frameRate;
    position.y = position.y - stepXY * sin(gf::radians(headingAngle)) * 30/frameRate;
}

void Entity::moveLeft(float headingAngle, float frameRate)
{
    position.x = position.x + stepXY * cos(gf::radians(headingAngle-90)) * 30/frameRate;
    position.y = position.y + stepXY * sin(gf::radians(headingAngle-90)) * 30/frameRate;
}

void Entity::moveRight(float headingAngle, float frameRate)
{
    position.x = position.x + stepXY * cos(gf::radians(headingAngle+90)) * 30/frameRate;
    position.y = position.y + stepXY * sin(gf::radians(headingAngle+90)) * 30/frameRate;
}

void Entity::setZ(float newZ)
{
    position.z = newZ;
}
