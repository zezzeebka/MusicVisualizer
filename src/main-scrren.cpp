#include "main-Screen.h"
#include <cmath>


MainScreen::MainScreen()
{

}

MainScreen::~MainScreen()
{
    delete handler;
}

void MainScreen::SampleParser(sf::Sound* _music){
    int a = 0;
    auto samples = _music->getBuffer()->getSamples();
    int currentSamplesStart = frame*(_music->getBuffer()->getSampleRate()/60);
    int currentSamplesEnd = (frame+1)*(_music->getBuffer()->getSampleRate()/60);

    int maxAmp = samples[currentSamplesStart];
    int minAmp = samples[currentSamplesStart+1];
    std::vector<int> calculatingAmp;

    int average = 0;
    int sum = 0;
    int deviation = 0;
    dB.clear();
    dB.resize(22);
    for (int i = currentSamplesStart+2; i < currentSamplesEnd; i++){
        if(samples[i] > maxAmp){
            maxAmp = samples[i];
            calculatingAmp.clear();
            calculatingAmp.push_back(maxAmp);
        }
        else if(samples[i] < minAmp){
            minAmp = samples[i];
            calculatingAmp.push_back(minAmp);
        }
        else if(samples[i] > minAmp){
            for(auto j : calculatingAmp){
                average += j;
            }
            if(calculatingAmp.size()!=0){
            average /= calculatingAmp.size();

            for(auto j : calculatingAmp){
                sum += (j-average)*(j-average);
            }
            sum/=calculatingAmp.size();
            deviation = sqrt(sum);
                if(deviation>dB[abs(calculatingAmp[0]/1000)]){
                    dB[abs(calculatingAmp[0]/1000)] = abs(deviation);
            }
            }
            average = 0;
            sum = 0;
            deviation = 0;
            maxAmp = 0;
            minAmp = 0;
        }
    }

    frame++;

}

void MainScreen::Draw(sf::RenderWindow &_window){
    SampleParser(handler->getMusic());

    for(int i = 0; i < 22; i++){
        sf::RectangleShape rectangle(sf::Vector2f(40,(dB[i])));
        rectangle.setFillColor(sf::Color(200, 50, 50));

        rectangle.setPosition(20+i*50, 900-(dB[i]/80));
        _window.draw(rectangle);
    }
}


