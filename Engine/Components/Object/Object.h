#pragma once

#include <SFML/Graphics.hpp>
#include <iostream>

class Object {

protected:
	sf::Vector2f Position;
	sf::Vector2f Size;
	std::string Name;

public:
	Object();

	void SetPosition(const sf::Vector2f Position);
	sf::Vector2f GetPosition() const;

	void SetSize(const sf::Vector2f Size);
	sf::Vector2f GetSize() const;

	void SetName(const std::string Name);
	std::string GetName() const;

};