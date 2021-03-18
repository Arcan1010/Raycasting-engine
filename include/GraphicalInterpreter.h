//
// Created by Mateusz on 04.08.2020.
//

#ifndef GAME_GRAPHICALINTERPRETER_H
#define GAME_GRAPHICALINTERPRETER_H

#include "typedefs.h"
#include "functions.h"

class Observer;
class SegmentManager;

class GraphicalInterpreter
{
    int standardRectHeight;

    //Cursor
    sf::Sprite cursorSprite;
    sf::Texture cursorTexture;

    //Floor
    sf::Sprite floorSprite;
    sf::Texture floorTexture;

    //Sky
    sf::Sprite skySprite;
    sf::Texture skyTexture;

public:
    //Constructor
    GraphicalInterpreter(int cStandardRectHeight,std::string cCursorFileName, std::string cFloorFileName, std::string cSkyFileName);

    //Destructor
    virtual ~GraphicalInterpreter();

    //Setter
    void setStandardRectHeight(int newStandardRectHeight);

    //Getter
    const int getStandardRectHeight() const;

    //Methods
    void generateGraphics(sf::RenderWindow &window,DoubleVertexVector &sightHitPoints,const Observer &observer, SegmentManager &segmentManager,const sf::Image &map, float frameRate);
};


#endif //GAME_GRAPHICALINTERPRETER_H
