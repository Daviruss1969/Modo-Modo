#include <SFML/Graphics.hpp>
#include <iostream>
using namespace std;

int main()
{
    
    sf::RenderWindow window(sf::VideoMode(700, 400), "Modo modo");
    auto image = sf::Image{};
    if (!image.loadFromFile("src/assets/icons/ban.png"))
    {
        cout<<"erreur de l'affichage de l'icône";
    }
    window.setIcon(image.getSize().x, image.getSize().y, image.getPixelsPtr());
    sf::CircleShape shape(100.f);
    shape.setFillColor(sf::Color::Green);

    while (window.isOpen())
    {
        sf::Event event;
        while (window.pollEvent(event))
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