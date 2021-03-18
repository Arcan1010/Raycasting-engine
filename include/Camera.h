//
// Created by Mateusz on 31.07.2020.
//

#ifndef GAME_CAMERA_H
#define GAME_CAMERA_H

#include <SFML/Graphics.hpp>

class Camera
{
    sf::Vector3f position;
    float tilt;
    float tiltMin;
    float tiltMax;

public:
    //Constructor
    Camera(float cX,float cY, float cZ, float cTilt);

    //Destructor
    virtual ~Camera();

    //Setter
    void setPosition(sf::Vector3f newPosition);
    void setTilt(float newTilt);

    //Getter
    const sf::Vector3f &getPosition() const;
    const float &getTilt() const;
};


#endif //GAME_CAMERA_H
