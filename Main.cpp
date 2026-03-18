#include <SFML/Graphics.hpp>
#include <iostream>
#include <cmath>
#include <vector>
#include <sstream>
#include <string>
#include <fstream>
#include <SFML/Audio.hpp>
#include <iomanip>
using namespace std;
using namespace sf;

// GLOBAL VARIABLES
Event event;
RenderWindow window = { VideoMode::getDesktopMode(), "Icy Towers" };
Vector2u windowSize = window.getSize();
View gameCamera = window.getDefaultView();
int menuIndex = 1;

Clock timeClock;
Clock dtClock;
float dt = 0;

// test
// Main
int main() {
    while (window.isOpen()) {
        dt = dtClock.restart().asSeconds() * 10;

        while (window.pollEvent(event)) {
            if (event.type == Event::Closed) {
                window.close();
            }
        }
        
        // Game logic goes here

        // another test
        cout << "TEST";


        // Drawing goes here
    }


    return 0;
}
