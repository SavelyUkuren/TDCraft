#include "Actor.h"

Actor::Actor()
{
	shape.setFillColor(sf::Color::Red);
	shape.setSize(Size);
	shape.setPosition(Position);
}

void Actor::SetSize(const sf::Vector2f Size)
{
	Object::SetSize(Size);
	shape.setSize(Size);
}

void Actor::SetPosition(const sf::Vector2f Position)
{
	Object::SetPosition(Position);
	shape.setPosition(Position);
}

void Actor::SetColor(sf::Color Color)
{
	this->Color = Color;
	shape.setFillColor(Color);
}

void Actor::draw(sf::RenderTarget& target, sf::RenderStates states) const
{
	target.draw(shape);
}
