//
// Created by Mateusz on 13.08.2020.
//

#include "SegmentManager.h"
#include "Segment.h"

//Constructor
SegmentManager::SegmentManager()
{
}

//Destructor
SegmentManager::~SegmentManager()
{
}

//Methods
void SegmentManager::addSegment(SegmentType cSegmentType, float cHeight, sf::Color cColor,std::string cTopFileName, std::string cWallFileName)
{
    segments.push_back(Segment(cSegmentType, cHeight,cColor,cTopFileName,cWallFileName));
}

Segment &SegmentManager::findSegment(const sf::Color &color)
{
    for(int i=0;i<segments.size();i++)
    {
        if(segments[i].getColor() == color) return segments[i];
    }
}