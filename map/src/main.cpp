#include <iostream>
#include <SFML/Graphics.hpp>

int main()
{
     sf::RenderWindow window(sf::VideoMode(800, 600), "Map");
     sf::CircleShape shape(100.f);
     shape.setFillColor(sf::Color::Green);
     
     while (window.isOpen())
     {
          sf::Event event;
          while (window.pollEvent(event)) // event loop
          {
               if (event.type == sf::Event::Closed)
                    window.close();
          }
     
          window.clear();
          window.draw(shape);
          window.display();
     }
     
     return 0;
}