//
// Created by Mateusz on 13.08.2020.
//

#include "Segment.h"

//Constructor
Segment::Segment(SegmentType cSegmentType, float cHeight, sf::Color cColor, std::string cTopFileName, std::string cWallFileName)
    : height(cHeight), color(cColor), segmentType(cSegmentType)
{
    topImage.loadFromFile(cTopFileName);
    topImage.setSmooth(false);
    topImage.setRepeated(true);
    wallTexture.loadFromFile(cWallFileName);
    wallTexture.setSmooth(false);
    wallTexture.setRepeated(true);
}

//Destructor
Segment::~Segment()
{
}

//Setter
const sf::Texture &Segment::getTopImage() const
{
    return topImage;
}

const sf::Texture &Segment::getWallTexture() const
{
    return wallTexture;
}

const sf::Color &Segment::getColor() const
{
    return color;
}

const float &Segment::getHeight() const
{
    return height;
}

const SegmentType &Segment::getSegmentType() const
{
    return segmentType;
}