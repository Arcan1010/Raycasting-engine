//
// Created by Mateusz on 31.07.2020.
//

#include "Observer.h"
#include "functions.h"
#include "Player.h"

//Constructor
Observer::Observer(float cX,float cY, float cZ, float cTilt, float cSightRange, float cSightAngle, float cRayStartingAngle, float cRayAngleDifference)
    : camera(cX,cY,cZ,cTilt), sightRange(cSightRange), sightAngle(cSightAngle), rayStartingAngle(cRayStartingAngle), rayAngleDifference(cRayAngleDifference)
{
}

//Destructor
Observer::~Observer()
{
}

//Setter
void Observer::setCameraPosition(sf::Vector3f newPosition)
{
    camera.setPosition(newPosition);
}

void Observer::setCameraTilt(float newTilt)
{
    camera.setTilt(newTilt);
}

void Observer::setRayStartingAngle(float newRayStartingAngle)
{
    rayStartingAngle = newRayStartingAngle;
}

//Getter
const Camera &Observer::getCamera() const
{
    return camera;
}

const float &Observer::getSightRange() const
{
    return sightRange;
}

const float &Observer::getSightAngle() const
{
    return sightAngle;
}

const float &Observer::getRayStartingAngle() const
{
    return rayStartingAngle;
}

const float &Observer::getRayAngleDifference() const
{
    return rayAngleDifference;
}

//Methods
void Observer::watch(const sf::Image &map,DoubleVertexVector &doubleVertexVector)
{
    for(float angle=rayStartingAngle;angle<rayStartingAngle+sightAngle;angle=angle+rayAngleDifference)
    {
        VertexVector vertexVector;
        float x = camera.getPosition().x;
        float y = camera.getPosition().y;
        if(map.getPixel(round(x),round(y)) != sf::Color(255,255,255)) // if camera is on segment -> add new Vertex to vertexVector
        {
            vertexVector.push_back(
                    sf::Vertex(sf::Vector2(round(x), round(y)), map.getPixel(round(x), round(y))));
        }
        int xLast = round(x + sightRange*cos(gf::radians(angle)));
        int yLast = round(y + sightRange*sin(gf::radians(angle)));
        float dx = xLast - x;
        float dy = yLast - y;
        float Steps = abs(dx)>abs(dy) ? abs(dx) : abs(dy);
        float incX = dx / Steps;
        float incY = dy / Steps;

        for(int j=0;j<Steps;j++)
        {
            x = x + incX;
            y = y + incY;
            if (round(x) < map.getSize().x && 0 < round(x) && round(y) < map.getSize().y && 0 < round(y))
            {
                if(map.getPixel(round(x), round(y)) != map.getPixel(round(x - incX), round(y - incY)))
                {
                    if(map.getPixel(round(x - incX), round(y - incY)) == sf::Color(255,255,255)) // previous white
                    {
                        vertexVector.push_back(
                                sf::Vertex(sf::Vector2(round(x), round(y)), map.getPixel(round(x), round(y))));
                    }
                    else if(map.getPixel(round(x), round(y)) == sf::Color(255,255,255)) // current white
                    {
                        vertexVector.push_back(
                                sf::Vertex(sf::Vector2(round(x - incX), round(y - incY)),
                                           map.getPixel(round(x - incX), round(y - incY))));
                    }
                    else // none white
                    {
                        vertexVector.push_back(
                                sf::Vertex(sf::Vector2(round(x - incX), round(y - incY)),
                                           map.getPixel(round(x - incX), round(y - incY))));
                        vertexVector.push_back(
                                sf::Vertex(sf::Vector2(round(x), round(y)), map.getPixel(round(x), round(y))));
                    }
                }
            }
        }
        doubleVertexVector.push_back(vertexVector);
    }
}

void Observer::followPlayer(Player &player)
{
    camera.setPosition(player.getPosition());
    setRayStartingAngle(player.getHeadingAngle()-sightAngle/2);
    camera.setTilt(player.getLookingTilt());
}