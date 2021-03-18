//
// Created by Mateusz on 06.08.2020.
//

#ifndef GAME_ENTITY_H
#define GAME_ENTITY_H

#include <SFML/Graphics.hpp>

class Entity
{
protected:
    sf::Vector3f position;
    float stepXY;
    float stepZ;
    float lookingTilt;

public:
    //Constructor
    Entity(float cX, float cY, float cZ, float cStepXY, float cStepZ);

    //Destructor
    virtual ~Entity() = 0;

    //Setter
    void setPosition(sf::Vector3f newPosition);
    void setLookingTilt(float newLookingTilt);

    //Getter
    const sf::Vector3f &getPosition() const;
    const float &getStepXY() const;
    const float &getStepZ() const;
    const float &getLookingTilt() const;

    //Methods
    void moveLeft(float headingAngle, float frameRate);
    void moveRight(float headingAngle, float frameRate);
    void moveForward(float headingAngle, float frameRate);
    void moveBackward(float headingAngle, float frameRate);
    void setZ(float newZ);
};


#endif //GAME_ENTITY_H
