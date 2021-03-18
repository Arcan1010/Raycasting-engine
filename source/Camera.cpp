//
// Created by Mateusz on 31.07.2020.
//

#include "Camera.h"

//Constructor
Camera::Camera(float cX,float cY, float cZ, float cTilt)
    : position(sf::Vector3f(cX,cY,cZ)), tilt(cTilt)
{
}

//Destructor
Camera::~Camera()
{
}

//Setter
void Camera::setPosition(sf::Vector3f newPosition)
{
    position = newPosition;
}

void Camera::setTilt(float newTilt)
{
    tilt = newTilt;
}

//Getter
const sf::Vector3f &Camera::getPosition() const
{
    return position;
}

const float &Camera::getTilt() const
{
    return tilt;
}