#include <SFML/Graphics.hpp>
#include <iostream>
#include <vector>
#include "classes.h"

int main()
{
    Board B;
    B.start();

    // window init
    sf::RenderWindow window(sf::VideoMode(850, 850), "SFML works!");
    // Load a sprite to display
    sf::Texture board_texture;
    if (!board_texture.loadFromFile("src/img/board.png"))
        return EXIT_FAILURE;
    sf::Sprite board_sprite(board_texture);

    sf::Texture bp_texture;
    if (!bp_texture.loadFromFile("src/img/bP.png"))
        return EXIT_FAILURE;
    sf::Sprite bp_sprite(bp_texture);
    bp_sprite.setScale(1.328, 1.328);
    bp_sprite.setPosition(106.25, 106.25);

    sf::Texture wp_texture;
    if (!wp_texture.loadFromFile("src/img/wP.png"))
        return EXIT_FAILURE;
    sf::Sprite wp_sprite(wp_texture);

    // window loop
    while (window.isOpen())
    {
        sf::Event event;
        while (window.pollEvent(event))
        {
            if (event.type == sf::Event::Closed)
                window.close();
        }

        window.clear();
        window.draw(board_sprite);
        window.draw(wp_sprite);

        window.draw(bp_sprite);
        window.display();
    }

    return 0;
}