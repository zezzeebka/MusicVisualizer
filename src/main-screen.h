#ifndef BACKGROUND_H
#define BACKGROUND_H
#include <SFML/Graphics.hpp>
#include <SFML/Audio.hpp>
#include "musichandler.h"
class MainScreen
{
private:
    int frame = 0;
    std::vector<int> dB = {};
    MusicHandler* handler = new MusicHandler();
public:
    MainScreen();
    ~MainScreen();
    void SampleParser(sf::Sound* _music);
    void Draw(sf::RenderWindow& _window);
};

#endif // BACKGROUND_H
