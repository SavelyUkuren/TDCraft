#include "Object.h"

Object::Object()
{
}

void Object::SetPosition(const sf::Vector2f Position)
{
	this->Position = Position;
}

sf::Vector2f Object::GetPosition() const
{
	return Position;
}

void Object::SetSize(const sf::Vector2f Size)
{
	this->Size = Size;
}

sf::Vector2f Object::GetSize() const
{
	return Size;
}

void Object::SetName(const std::string Name)
{
	this->Name = Name;
}

std::string Object::GetName() const
{
	return Name;
}

