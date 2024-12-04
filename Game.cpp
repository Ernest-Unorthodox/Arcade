#include "Game.h"
 
Game::Game() : window(sf::VideoMode(500, 500), "Game Window") {
    StartGame();
    GameShape(window);
}
sf::RenderWindow& Game::StartGame() {
    window.setFramerateLimit(60);
    return window;
}

int Game::GameShape(sf::RenderWindow& window) {

    sf::CircleShape testShape(50.0f);
    testShape.setFillColor(sf::Color::White);
    testShape.setPosition(100, 100);


    while (window.isOpen()) {
        sf::Event event;
        while (window.pollEvent(event)) {
            if (event.type == sf::Event::Closed)
                window.close();
        }

        window.clear();

        window.draw(testShape);
        window.display();
    }

    return 0;
}
