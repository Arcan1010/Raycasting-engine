#include <SFML/Graphics.hpp>
#include "Observer.h"
#include "GraphicalInterpreter.h"
#include "EventManager.h"
#include "MovementManager.h"
#include "SegmentManager.h"
#include "Player.h"
#include <Windows.h>
#include <thread>

int main()
{
    SetPriorityClass(GetCurrentProcess(),HIGH_PRIORITY_CLASS);

    sf::Image map;
    map.loadFromFile("../data/mapa.png");

    DoubleVertexVector hitVertex;

    Player player(300,200,0,4,0.06,3,-90,1);

    Observer observer(200,200,0,0,300,66,0,0.2);

    GraphicalInterpreter graphicalInterpreter(15000,"../data/cursor.png","../data/floor.png","../data/sky.png");

    EventManager eventManager;

    MovementManager movementManager;

    SegmentManager segmentManager;
    segmentManager.addSegment(RectangleSegment,0,sf::Color(255,255,255),"../data/blok3.png","../data/blok1.png");
    segmentManager.addSegment(RectangleSegment,1,sf::Color(0,0,0),"../data/blok3.png","../data/blok1.png");
    segmentManager.addSegment(RectangleSegment,0.3,sf::Color(255,201,14),"../data/blok3.png","../data/blok2.png");
    segmentManager.addSegment(NonRectangleSegment,3,sf::Color(185,122,87),"../data/blok3.png","../data/blok3.png");
    segmentManager.addSegment(NonRectangleSegment,0,sf::Color(0,162,232),"../data/blok5.png","../data/blok1.png");

    sf::RenderWindow window(sf::VideoMode(1200,800), "Map");
    //sf::RenderWindow window(sf::VideoMode(sf::VideoMode::getDesktopMode().getDesktopMode().width,sf::VideoMode::getDesktopMode().getDesktopMode().height), "Map");
    //sf::RenderWindow window(sf::VideoMode(330,330), "Map");
    window.setVerticalSyncEnabled(false);
    window.setFramerateLimit(30);
    sf::Clock frameClock;

    sf::Font font;
    font.loadFromFile("../data/calibril.ttf");
    sf::Text frameRateText;
    frameRateText.setFont(font);
    frameRateText.setFillColor(sf::Color(0,0,0));

    while(window.isOpen())
    {
        window.clear(sf::Color(255,255,255));
        float frameRate = 1.0f / frameClock.getElapsedTime().asSeconds();
        frameClock.restart();

        //----------------------------------------------------------------------------//
        hitVertex.clear();
        eventManager.eventResponse(window);
        movementManager.movePlayer(player,eventManager,segmentManager,map,2,0.005,0.2,frameRate);
        observer.followPlayer(player);
        observer.watch(map,hitVertex);
        graphicalInterpreter.generateGraphics(window,hitVertex,observer,segmentManager,map,frameRate);
        //----------------------------------------------------------------------------//

        if(window.hasFocus())
        {
            window.setMouseCursorVisible(false);
        }
        else window.setMouseCursorVisible(true);
        frameRateText.setString(std::to_string(frameRate));
        window.draw(frameRateText);

        window.display();
    }

    return 0;
}