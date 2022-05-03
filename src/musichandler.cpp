#include "musichandler.h"

MusicHandler::MusicHandler()
{
    musicBuffer = new sf::SoundBuffer();
    music = new sf::Music();
    music->openFromFile("data/undead-corporation-everything-will-freezeminus.wav");
    music->setVolume(20);
    music->play();
}
