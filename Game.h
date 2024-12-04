#pragma once
#include "SFML/Graphics.hpp"

class Game {
public: 
    Game();
    sf::RenderWindow& StartGame();
    int GameShape(sf::RenderWindow& window); 

private:
    sf::RenderWindow window;
};
