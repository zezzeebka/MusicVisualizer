#include <SFML/Graphics.hpp>
#include "musichandler.h"
#include <chrono>
#include "main-screen.h"
std::chrono::time_point<std::chrono::system_clock> start= std::chrono::system_clock::now();
int main()
{
    sf::RenderWindow window(sf::VideoMode(1600, 900), "SFML works!");
    window.setFramerateLimit(60);

    MainScreen* visualizer = new MainScreen();
    while (window.isOpen())
    {

        std::chrono::time_point<std::chrono::system_clock> end = std::chrono::system_clock::now();
        std::chrono::duration<double> elapsed_seconds = end - start;



        sf::Event event;
        while (window.pollEvent(event))
        {
            switch ( event.type )
            {
            case sf::Event::Closed:
                delete visualizer;
                window.close();
                break;

            case sf::Event::MouseButtonPressed:
            {

            }
            }
        }


        window.clear();

        visualizer->Draw(window);

        window.display();
    }

    return 0;
}
