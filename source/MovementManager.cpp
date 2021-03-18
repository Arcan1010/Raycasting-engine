//
// Created by Mateusz on 06.08.2020.
//

#include "MovementManager.h"
#include "Player.h"
#include "EventManager.h"
#include "functions.h"
#include "SegmentManager.h"

#include <iostream>

//Constructor
MovementManager::MovementManager()
{
}

//Destructor
MovementManager::~MovementManager()
{
}

//Methods
void MovementManager::movePlayer(Player &player,EventManager &eventManager,SegmentManager &segmentManager,sf::Image &map, float absFriction, float absGravity, float mouseSensitivity, float frameRate)
{
    //Rotation
    player.setHeadingAngle(player.getHeadingAngle()+player.getRotationStep()*eventManager.getHorizontalAngle()*mouseSensitivity);
    //Linear Horizontal Movement
    if((eventManager.isForward() ? 1 : 0) - (eventManager.isBackward() ? 1 : 0) > 0) player.moveForward(player.getHeadingAngle(), frameRate);
    if(player.getPosition().z < segmentManager.findSegment(map.getPixel(round(player.getPosition().x),player.getPosition().y)).getHeight()) player.moveBackward(player.getHeadingAngle(), frameRate);

    if((eventManager.isForward() ? 1 : 0) - (eventManager.isBackward() ? 1 : 0) < 0) player.moveBackward(player.getHeadingAngle(), frameRate);
    if(player.getPosition().z < segmentManager.findSegment(map.getPixel(round(player.getPosition().x),player.getPosition().y)).getHeight()) player.moveForward(player.getHeadingAngle(), frameRate);

    if((eventManager.isRotateRight() ? 1 : 0) - (eventManager.isRotateLeft() ? 1 : 0) > 0) player.moveRight(player.getHeadingAngle(), frameRate);
    if(player.getPosition().z < segmentManager.findSegment(map.getPixel(round(player.getPosition().x),player.getPosition().y)).getHeight()) player.moveLeft(player.getHeadingAngle(), frameRate);

    if((eventManager.isRotateRight() ? 1 : 0) - (eventManager.isRotateLeft() ? 1 : 0) < 0) player.moveLeft(player.getHeadingAngle(), frameRate);
    if(player.getPosition().z < segmentManager.findSegment(map.getPixel(round(player.getPosition().x),player.getPosition().y)).getHeight()) player.moveRight(player.getHeadingAngle(), frameRate);
    //TiltChange
    player.setLookingTilt(player.getLookingTilt() - eventManager.getVerticalAngle()*mouseSensitivity*player.getTiltStep());
    //Linear Vertical Movement
    if(player.getPosition().z != segmentManager.findSegment(map.getPixel(round(player.getPosition().x),round(player.getPosition().y))).getHeight())
        player.setSpeedZ(gf::constrain(player.getSpeedZ()-absGravity,-player.getStepZ(),player.getSpeedZ()-absGravity));
    if(eventManager.isJump() && player.getPosition().z == segmentManager.findSegment(map.getPixel(round(player.getPosition().x),round(player.getPosition().y))).getHeight())
        player.setSpeedZ(player.getStepZ());
    player.setZ(gf::constrain(player.getPosition().z+player.getSpeedZ(),
            segmentManager.findSegment(map.getPixel(round(player.getPosition().x),round(player.getPosition().y))).getHeight(),
            player.getPosition().z+player.getSpeedZ()));
    if(player.getSpeedZ() > 0 && player.getPosition().z == segmentManager.findSegment(map.getPixel(round(player.getPosition().x),round(player.getPosition().y))).getHeight())
        player.setSpeedZ(0);
}