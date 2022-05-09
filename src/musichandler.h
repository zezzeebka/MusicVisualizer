#ifndef MUSICHANDLER_H
#define MUSICHANDLER_H
#include <SFML/Audio.hpp>

class MusicHandler
{
    sf::SoundBuffer* musicBuffer;
    sf::Sound* music = new sf::Sound();
public:
    MusicHandler();
    ~MusicHandler();
    sf::Sound* getMusic();
    sf::SoundBuffer getBuffer();

};

#endif // MUSICHANDLER_H
