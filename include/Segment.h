//
// Created by Mateusz on 13.08.2020.
//

#ifndef GAME_SEGMENT_H
#define GAME_SEGMENT_H

#include <SFML/Graphics.hpp>

enum SegmentType
{
    RectangleSegment,
    NonRectangleSegment
};

class Segment
{
    sf::Texture topImage;
    sf::Texture wallTexture;
    SegmentType segmentType;
    sf::Color color;
    float height; // normally -1 <-> 1

public:
    //Constructor
    Segment(SegmentType cSegmentType, float cHeight, sf::Color cColor, std::string cTopFileName, std::string cWallFileName);

    //Destructor
    virtual ~Segment();

    //Setter

    //Getter
    const sf::Texture &getTopImage() const;
    const sf::Texture &getWallTexture() const;
    const sf::Color &getColor() const;
    const float &getHeight() const;
    const SegmentType &getSegmentType() const;
};


#endif //GAME_SEGMENT_H
