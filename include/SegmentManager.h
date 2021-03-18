//
// Created by Mateusz on 13.08.2020.
//

#ifndef GAME_SEGMENTMANAGER_H
#define GAME_SEGMENTMANAGER_H

#include "typedefs.h"
#include "Segment.h"

class SegmentManager
{
    std::vector<Segment> segments;

public:
    //Constructor
    SegmentManager();

    //Destructor
    virtual ~SegmentManager();

    //Methods
    void addSegment(SegmentType cSegmentType, float cHeight, sf::Color cColor, std::string cTopFileName, std::string cWallFileName);
    Segment &findSegment(const sf::Color &color);
};


#endif //GAME_SEGMENTMANAGER_H
