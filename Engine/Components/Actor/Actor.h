#pragma once

#include <SFML/Graphics.hpp>
#include <iostream>

#include "../Object/Object.h"

class Actor: public Object, public sf::Drawable {
	
	sf::RectangleShape shape;

	sf::Color Color;

public:
	Actor();

	void SetSize(const sf::Vector2f Size);
	void SetPosition(const sf::Vector2f Position);
	void SetColor(sf::Color Color);

private:
	virtual void draw(sf::RenderTarget &target, sf::RenderStates states) const;

};