#include <SFML/Graphics.hpp>

int main() {
    sf::RenderWindow window(sf::VideoMode(800, 800), "Car Drawing");

    // Sky
    sf::RectangleShape sky(sf::Vector2f(800, 640));
    sky.setFillColor(sf::Color(135, 206, 250));

    // Road
    sf::RectangleShape road(sf::Vector2f(800, 160));
    road.setFillColor(sf::Color(80, 80, 80));
    road.setPosition(0, 640);

    // Sun
    sf::CircleShape sun(80);
    sun.setFillColor(sf::Color(255, 204, 0)); 
    sun.setPosition(640, 0);

    // Car body
    sf::RectangleShape carBase(sf::Vector2f(400, 120));
    carBase.setFillColor(sf::Color(178, 34, 34)); 
    carBase.setPosition(200, 520);

    sf::ConvexShape carTop;
    carTop.setPointCount(4);
    carTop.setPoint(0, sf::Vector2f(200, 520));
    carTop.setPoint(1, sf::Vector2f(290, 450));
    carTop.setPoint(2, sf::Vector2f(400, 450));
    carTop.setPoint(3, sf::Vector2f(490, 520));
    carTop.setFillColor(sf::Color(178, 34, 34));

    // Wheels
    sf::CircleShape wheel1(40);
    wheel1.setFillColor(sf::Color::Black);
    wheel1.setPosition(260, 600);

    sf::CircleShape wheel2(40);
    wheel2.setFillColor(sf::Color::Black);
    wheel2.setPosition(455, 600);

    while (window.isOpen()) {
        sf::Event event;
        while (window.pollEvent(event)) {
            if (event.type == sf::Event::Closed)
                window.close();
        }

        window.clear();
        window.draw(sky);
        window.draw(sun);
        window.draw(road);
        window.draw(carBase);
        window.draw(carTop);
        window.draw(wheel1);
        window.draw(wheel2);
        window.display();
    }

    return 0;
}
