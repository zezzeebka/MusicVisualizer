#ifndef BACKGROUND_H
#define BACKGROUND_H
#include <SFML/Graphics.hpp>

class Background
{
private:
    sf::Image* _defaultImage;
    sf::Font* _font;
    sf::Text* _text;
public:
    Background();
    ~Background();
};

#endif // BACKGROUND_H
