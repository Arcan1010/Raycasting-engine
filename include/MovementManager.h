//
// Created by Mateusz on 06.08.2020.
//

#ifndef GAME_MOVEMENTMANAGER_H
#define GAME_MOVEMENTMANAGER_H

#include "typedefs.h"
class EventManager;
class SegmentManager;

class MovementManager
{

public:
    //Constructor
    MovementManager();

    //Destructor
    virtual ~MovementManager();

    //Methods
    void movePlayer(Player &player,EventManager &eventManager,SegmentManager &segmentManager, sf::Image &map,float absFriction, float absGravity, float mouseSensitivity, float frameRate);
};


#endif //GAME_MOVEMENTMANAGER_H
