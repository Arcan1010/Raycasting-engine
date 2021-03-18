//
// Created by Mateusz on 04.08.2020.
//

#include "EventManager.h"

//Constructor
EventManager::EventManager()
    : rotateLeftFlag(false), rotateRightFlag(false),
    forwardFlag(false), backwardFlag(false),
    jumpFlag(false), sneakFlag(false)
{
}

//Destructor
EventManager::~EventManager()
{
}

//Setter
void EventManager::setKeyboardFlag(sf::Keyboard::Key k,bool is)
{
    switch(k)
    {
        case sf::Keyboard::A:
            rotateLeftFlag = is;
            break;

        case sf::Keyboard::W:
            forwardFlag = is;
            break;

        case sf::Keyboard::S:
            backwardFlag = is;
            break;

        case sf::Keyboard::D:
            rotateRightFlag = is;
            break;

        case sf::Keyboard::LShift:
            sneakFlag = is;
            break;

        case sf::Keyboard::Space:
            jumpFlag = is;
            break;

        default:
            break;
    }
}

void EventManager::setMouseFlag(int newX, int newY, bool isWindowOnFocus)
{
    if(isWindowOnFocus)
    {
        lookingHorizontalAngle = newX;
        lookingVerticalAngle = newY;
    }
}

//Getter
const bool EventManager::isRotateLeft() const
{
    return rotateLeftFlag;
}

const bool EventManager::isRotateRight() const
{
    return rotateRightFlag;
}

const bool EventManager::isForward() const
{
    return forwardFlag;
}

const bool EventManager::isBackward() const
{
    return backwardFlag;
}

const bool EventManager::isJump() const
{
    return jumpFlag;
}

const bool EventManager::isSneak() const
{
    return sneakFlag;
}

const int EventManager::getVerticalAngle() const
{
    return lookingVerticalAngle;
}

const int EventManager::getHorizontalAngle() const
{
    return lookingHorizontalAngle;
}

//Methods
void EventManager::eventResponse(sf::RenderWindow &window)
{
    //Mouse events
    sf::Vector2i oldMousePosition(
            int(window.getPosition().x) + int(window.getSize().x / 2),
            int(window.getPosition().y) + int(window.getSize().y / 2));
    int distanceX = int(sf::Mouse::getPosition().x) - oldMousePosition.x;
    int distanceY = int(sf::Mouse::getPosition().y) - oldMousePosition.y;
    setMouseFlag(distanceX, distanceY, window.hasFocus());
    if(window.hasFocus()) sf::Mouse::setPosition(oldMousePosition);
    //Other events
    sf::Event event;
    while(window.pollEvent(event))
    {
        switch(event.type)
        {
            case sf::Event::Closed:
                window.close();
                break;

            case sf::Event::KeyPressed:
                setKeyboardFlag(event.key.code,true);
                break;

            case sf::Event::KeyReleased:
                setKeyboardFlag(event.key.code,false);
                break;

            default:
                break;
        }
    }
}