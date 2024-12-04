#include <iostream>
#include "SFML/Graphics.hpp"

class GameWindow {
    enum ProgramRunning {
        RUNNING,
        OFFLINE
    };

    struct WindowSize {
        int screenWidth = 500;
        int screenHeight = 500;
        sf::RenderWindow window; 

        WindowSize() {
            // Create SFML window
            sf::RenderWindow window(sf::VideoMode(screenWidth, screenHeight), "Game Window");
            window.setFramerateLimit(60);
            WindowActive = true;
        };

    private:
        struct PredefinedShapes {
            void CreateCircle() {
                // Create circle shape
                sf::CircleShape testShape(50.0f);
                testShape.setFillColor(sf::Color::White);
                testShape.setPosition(100, 100);
            }
        };
        bool WindowActive = false;
    };
};

int main()
{

    // Run program while window is oopen
    while (window.isOpen())
    {
        sf::Event event;
        while (window.pollEvent(event))
        {
            if (event.type == sf::Event::Closed)
                window.close();
        }

        // Clear window
        window.clear();

        // Draw test object to window
        window.draw(testShape);

        // End current frame
        window.display();
    }

    return 0;
}

