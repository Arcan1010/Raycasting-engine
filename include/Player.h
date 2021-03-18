//
// Created by Mateusz on 06.08.2020.
//

#ifndef GAME_PLAYER_H
#define GAME_PLAYER_H

#include "Entity.h"

class Player : public Entity
{
    float headingAngle;
    float rotationStep;
    float tiltStep;
    float speedZ;

public:
    //Constructor
    Player(float cX, float cY, float cZ, float cStepXY,float cStepZ, float cTiltStep, float cHeadingAngle, float cRotationStep);

    //Destructor
    virtual ~Player();

    //Setter
    void setHeadingAngle(float newHeadingAngle);
    void setSpeedZ(float newSpeedZ);

    //Getter
    const float &getHeadingAngle() const;
    const float &getRotationStep() const;
    const float &getTiltStep() const;
    const float &getSpeedZ() const;
};


#endif //GAME_PLAYER_H
