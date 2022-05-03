#ifndef BACKGROUND_H
#define BACKGROUND_H
#include <SFML/Graphics.hpp>

class MainScreen
{
private:
    sf::Image* _defaultImage;
    sf::Font* _font;
    sf::Text* _text;
public:
    MainScreen();
    ~MainScreen();
};

#endif // BACKGROUND_H
