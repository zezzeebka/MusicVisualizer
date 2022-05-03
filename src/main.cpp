#include <SFML/Graphics.hpp>
#include "musichandler.h"
#include "start-screen.h"

int main()
{
    sf::RenderWindow window(sf::VideoMode(1600, 900), "SFML works!");

    StartScreen* startScreen = new StartScreen();
    MusicHandler* musicHandler = new MusicHandler();

    while (window.isOpen())
    {
        sf::Event event;
        while (window.pollEvent(event))
        {
            switch ( event.type )
            {
            case sf::Event::Closed:
                window.close();
                break;

            case sf::Event::MouseButtonPressed:
            {

            }
            }
        }
    }

        window.clear();

        //window.draw();

        window.display();

    return 0;
}
