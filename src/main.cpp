#include <SFML/Graphics.hpp>
#include <iostream>
#include <vector>
#include "classes.h"



int main()
{
    Board B;
    B.start();

    //window init
    sf::RenderWindow window(sf::VideoMode(850, 850), "SFML works!");
    // Load a sprite to display
    sf::Texture texture;
    if (!texture.loadFromFile("src/img/board.png"))
        return EXIT_FAILURE;
    sf::Sprite sprite(texture);
    
    //window loop
    while (window.isOpen())
    {
        sf::Event event;
        while (window.pollEvent(event))
        {
            if (event.type == sf::Event::Closed)
                window.close();
        }

        window.clear();
        window.draw(sprite);
        window.display();
    }

    return 0;
}