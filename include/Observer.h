//
// Created by Mateusz on 31.07.2020.
//

#ifndef GAME_OBSERVER_H
#define GAME_OBSERVER_H

#include "Camera.h"
#include "typedefs.h"

class Observer
{
    Camera camera;
    float sightRange;
    float sightAngle;

    // Ray casting variables
    float rayStartingAngle;
    float rayAngleDifference;

public:
    //Constructor
    Observer(float cX,float cY, float cZ, float cTilt, float cSightRange, float cSightAngle, float cRayStartingAngle, float cRayAngleDifference);

    //Destructor
    virtual ~Observer();

    //Setter
    void setCameraPosition(sf::Vector3f newPosition);
    void setCameraTilt(float newTilt);
    void setRayStartingAngle(float newRayStartingAngle);

    //Getter
    const Camera &getCamera() const;
    const float &getSightRange() const;
    const float &getSightAngle() const;
    const float &getRayStartingAngle() const;
    const float &getRayAngleDifference() const;

    //Methods
    void watch(const sf::Image &map,DoubleVertexVector &doubleVertexVector);
    void followPlayer(Player &player);
};


#endif //GAME_OBSERVER_H
