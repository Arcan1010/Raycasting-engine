//
// Created by Mateusz on 04.08.2020.
//

#include "GraphicalInterpreter.h"
#include "Observer.h"
#include "SegmentManager.h"
#include "Segment.h"
#include "typedefs.h"
#include <thread>

#include <iostream>

//Constructor
GraphicalInterpreter::GraphicalInterpreter(int cStandardRectHeight,std::string cCursorFileName, std::string cFloorFileName, std::string cSkyFileName)
    : standardRectHeight(cStandardRectHeight)
{
    cursorTexture.loadFromFile(cCursorFileName);
    cursorSprite = sf::Sprite(cursorTexture);
    cursorSprite.setOrigin(cursorTexture.getSize().x/2,cursorTexture.getSize().y/2);

    floorTexture.loadFromFile(cFloorFileName);
    floorSprite = sf::Sprite(floorTexture);

    skyTexture.loadFromFile(cSkyFileName);
    skySprite = sf::Sprite(skyTexture);
    skySprite.setOrigin(0,skyTexture.getSize().y);
}

//Destructor
GraphicalInterpreter::~GraphicalInterpreter()
{
}

//Setter
void GraphicalInterpreter::setStandardRectHeight(int newStandardRectHeight)
{
    standardRectHeight = newStandardRectHeight;
}

//Getter
const int GraphicalInterpreter::getStandardRectHeight() const
{
    return standardRectHeight;
}

//Methods
void GraphicalInterpreter::generateGraphics(sf::RenderWindow &window,DoubleVertexVector &sightHitPoints,const Observer &observer, SegmentManager &segmentManager,const sf::Image &map, float frameRate)
{
    //Background
    //floorSprite.setPosition(0,window.getSize().y/2+observer.getCamera().getTilt()+800*observer.getCamera().getPosition().z);
    //skySprite.setPosition(0,window.getSize().y/2+observer.getCamera().getTilt()+800*observer.getCamera().getPosition().z);
    //window.draw(skySprite);
    //window.draw(floorSprite);
    //Walls
    int rectWidth = ceil(float(window.getSize().x) / (float(observer.getSightAngle()) / float(observer.getRayAngleDifference())));
    float variableZ = (observer.getCamera().getPosition().z*1.5 + 1);
    for(int i=0;i<sightHitPoints.size();i++)
    {
        float previousRectTop = 0;
        for(int j=sightHitPoints[i].size()-1;j>=0;j--)
        {
            float d = gf::distance(observer.getCamera().getPosition().x,observer.getCamera().getPosition().y,observer.getCamera().getPosition().z,
                sightHitPoints[i][j].position.x,sightHitPoints[i][j].position.y,segmentManager.findSegment(sightHitPoints[i][j].color).getHeight());
            /*float d = gf::distance(observer.getCamera().getPosition().x,observer.getCamera().getPosition().y,
                                   sightHitPoints[i][j].position.x,sightHitPoints[i][j].position.y);*/
            d = d * cos(gf::radians(observer.getRayStartingAngle() + (observer.getSightAngle()/2)- (i*observer.getRayAngleDifference()+observer.getRayStartingAngle())));
            int rectHeight = 2 * int(standardRectHeight / d);
            int rectTop = int(window.getSize().y/2 - (rectHeight/2));
            int rectBottom = rectTop + rectHeight;

            if(sightHitPoints[i][j].color != sf::Color(255,255,255))
            {
                rectBottom = rectBottom * variableZ;
                rectHeight = rectHeight * segmentManager.findSegment(sightHitPoints[i][j].color).getHeight(); // adjusting height
                rectTop = rectBottom - rectHeight;
                sf::RectangleShape wallRect(sf::Vector2f(rectWidth, rectHeight)); // width and height
                wallRect.setPosition(i * rectWidth, rectTop + observer.getCamera().getTilt()); // rect left-top coordinate

                if(segmentManager.findSegment(sightHitPoints[i][j].color).getSegmentType() == RectangleSegment)
                {
                    int x = round(sightHitPoints[i][j].position.x);
                    int y = round(sightHitPoints[i][j].position.y);
                    wallRect.setTexture(&segmentManager.findSegment(sightHitPoints[i][j].color).getWallTexture());
                    if(map.getPixel(x,y) == map.getPixel(x,y+1) && map.getPixel(x,y) != map.getPixel(x,y-1) ||
                        map.getPixel(x,y) != map.getPixel(x,y+1) && map.getPixel(x,y) == map.getPixel(x,y-1))
                    {
                        wallRect.setTextureRect(sf::IntRect(
                                int(round(sightHitPoints[i][j].position.x))%int(round(segmentManager.findSegment(sightHitPoints[i][j].color).getWallTexture().getSize().x)), 0,
                                1,wallRect.getTexture()->getSize().y));
                    }
                    else if(map.getPixel(x,y) == map.getPixel(x+1,y) && map.getPixel(x,y) != map.getPixel(x-1,y) ||
                            map.getPixel(x,y) != map.getPixel(x+1,y) && map.getPixel(x,y) == map.getPixel(x-1,y))
                    {
                        wallRect.setTextureRect(sf::IntRect(
                                int(round(sightHitPoints[i][j].position.y))%int(round(segmentManager.findSegment(sightHitPoints[i][j].color).getWallTexture().getSize().x)), 0,
                                1,wallRect.getTexture()->getSize().y));
                    }
                }
                else if(segmentManager.findSegment(sightHitPoints[i][j].color).getSegmentType() == NonRectangleSegment)
                {
                    wallRect.setTexture(&segmentManager.findSegment(sightHitPoints[i][j].color).getWallTexture());
                    wallRect.setTextureRect(sf::IntRect(
                            int(round(sightHitPoints[i][j].position.x)*round(sightHitPoints[i][j].position.y))%int(round(segmentManager.findSegment(sightHitPoints[i][j].color).getWallTexture().getSize().x)), 0,
                            1,wallRect.getTexture()->getSize().y));
                }
                window.draw(wallRect);

                if(sightHitPoints[i][j].color == sightHitPoints[i][j+1].color && j+1<sightHitPoints[i].size() && previousRectTop<rectTop)
                {
                    sf::VertexArray vaTop(sf::Quads,4);
                    sf::RenderStates rsTop;
                    rsTop.texture = &segmentManager.findSegment(sightHitPoints[i][j].color).getTopImage();

                    vaTop[0].position = sf::Vector2f(i * rectWidth,previousRectTop + observer.getCamera().getTilt());
                    vaTop[1].position = sf::Vector2f(i * rectWidth + rectWidth,previousRectTop + observer.getCamera().getTilt());
                    vaTop[2].position = sf::Vector2f(i * rectWidth + rectWidth,previousRectTop + observer.getCamera().getTilt() + rectTop - previousRectTop);
                    vaTop[3].position = sf::Vector2f(i * rectWidth ,previousRectTop + observer.getCamera().getTilt() + rectTop - previousRectTop);

                    float x = round(sightHitPoints[i][j].position.x);
                    float y = round(sightHitPoints[i][j].position.y);
                    const int xLast = round(sightHitPoints[i][j + 1].position.x);
                    const int yLast = round(sightHitPoints[i][j + 1].position.y);

                    vaTop[0].texCoords = sf::Vector2f(xLast,yLast);
                    vaTop[1].texCoords = sf::Vector2f(xLast,yLast);
                    vaTop[2].texCoords = sf::Vector2f(x,y);
                    vaTop[3].texCoords = sf::Vector2f(x,y);

                    window.draw(vaTop,rsTop);
                }

                previousRectTop = rectTop;
                // --------------- //
            }
        }
    }
    cursorSprite.setPosition(window.getSize().x/2,window.getSize().y/2);
    window.draw(cursorSprite);
}