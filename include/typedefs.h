//
// Created by Mateusz on 29.07.2020.
//

#ifndef GAME_TYPEDEFS_H
#define GAME_TYPEDEFS_H

#include <memory>
#include <vector>
#include <SFML/Graphics.hpp>

typedef std::vector<sf::Vertex> VertexVector;
typedef std::vector<VertexVector> DoubleVertexVector;

class Entity;
typedef std::shared_ptr<Entity> EntityPtr;

class Player;
typedef std::shared_ptr<Player> PlayerPtr;

class Segment;
typedef std::shared_ptr<Segment> SegmentPtr;

#endif //GAME_TYPEDEFS_H
