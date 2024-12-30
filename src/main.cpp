#include <SFML/Graphics.hpp>
#include <SFML/Window.hpp>

int main() {
    sf::Window window(sf::VideoMode({ 800, 600 }), "My Window");
    window.setVerticalSyncEnabled(true);
    window.setFramerateLimit(60);
    sf::Event event;

    while (window.isOpen()) {
        while(window.pollEvent(event)) {
            if (event.type == sf::Event::Closed) {
                window.close();
            }
        }
    }

    return 0;
}
