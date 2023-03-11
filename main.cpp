#include <iostream>
#include <SFML/Graphics.hpp>

#include "Engine/Scene/Scene.h"
#include "Engine/Components/Actor/Actor.h"
#include "Engine/Components/Camera/Camera.h"
#include "Engine/Components/Character/Character.h"

using namespace std;
using namespace sf;

int main() {
    RenderWindow window(VideoMode(640, 480), "TD Craft");
    window.setFramerateLimit(60);

    Scene scene;

    Character *player = new Character;
    player->SetPosition(sf::Vector2f(32, 32));
    player->SetSize(sf::Vector2f(32, 32));
    player->SetSpeed(0.2);

    scene.AddActor(player);

    player->SetSize(Vector2f(64, 64));

    while (window.isOpen()) {

        Event event;
        while (window.pollEvent(event)) {
            if (event.type == Event::Closed) {
                window.close();
            }
        }

        window.clear();

        player->Move(Vector2f(1, 0));

        window.draw(scene);

        window.display();
    }

    return 0;
}
