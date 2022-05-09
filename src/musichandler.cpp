#include "musichandler.h"

#include <iostream>
#include <memory>

MusicHandler::MusicHandler()
{
    musicBuffer = new sf::SoundBuffer();
    musicBuffer->loadFromFile("data/undead-corporation-everything-will-freezeminus.wav");

    //music->openFromFile("data/undead-corporation-everything-will-freezeminus.wav");
    music->setBuffer(*musicBuffer);
    music->setVolume(20);
    music->play();
    int i = 1;
}
MusicHandler::~MusicHandler(){
    delete musicBuffer;
    delete music;
}

sf::Sound* MusicHandler::getMusic(){
    return music;
}

sf::SoundBuffer MusicHandler::getBuffer(){
    return *musicBuffer;
}
