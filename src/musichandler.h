#ifndef MUSICHANDLER_H
#define MUSICHANDLER_H
#include <SFML/Audio.hpp>

class MusicHandler
{
    sf::SoundBuffer* musicBuffer;
    sf::Music* music;

public:
    MusicHandler();
    ~MusicHandler();

};

#endif // MUSICHANDLER_H
