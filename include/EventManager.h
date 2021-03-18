//
// Created by Mateusz on 04.08.2020.
//

#ifndef GAME_EVENTMANAGER_H
#define GAME_EVENTMANAGER_H

#include <SFML/Graphics.hpp>

class EventManager
{
    bool rotateLeftFlag;
    bool rotateRightFlag;
    bool forwardFlag;
    bool backwardFlag;
    bool jumpFlag;
    bool sneakFlag;

    float lookingVerticalAngle;
    float lookingHorizontalAngle;

    //Setter
    void setKeyboardFlag(sf::Keyboard::Key k,bool is);
    void setMouseFlag(int newX, int newY, bool isWindowOnFocus);

public:
    //Constructor
    EventManager();

    //Destructor
    virtual ~EventManager();

    //Getter
    const bool isRotateLeft() const;
    const bool isRotateRight() const;
    const bool isForward() const;
    const bool isBackward() const;
    const bool isJump() const;
    const bool isSneak() const;
    const int getVerticalAngle() const;
    const int getHorizontalAngle() const;

    //Methods
    void eventResponse(sf::RenderWindow &window);
};


#endif //GAME_EVENTMANAGER_H
