#pragma once

#include "../Object/Object.h"
#include <SFML/Graphics.hpp>


class Camera: public Object {

	sf::View view;

public:
	Camera();

	void SetPosition(const sf::Vector2f Position);
	void SetSize(const sf::Vector2f Size);

	sf::View GetView() const;
};