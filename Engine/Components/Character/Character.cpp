#include "Character.h"

Character::Character()
{
}

void Character::SetSpeed(const float Speed)
{
	this->Speed = Speed;
}

float Character::GetSpeed() const
{
	return Speed;
}

void Character::Move(sf::Vector2f Direction)
{
	DeltaTime = clock.getElapsedTime().asMilliseconds();
	clock.restart();
	
	sf::Vector2f CurrentPosition = GetPosition();

	sf::Vector2f MoveDirection;
	MoveDirection.x = Direction.x * Speed * DeltaTime;
	MoveDirection.y = Direction.y * Speed * DeltaTime;

	SetPosition(sf::Vector2f(CurrentPosition.x + MoveDirection.x,
		CurrentPosition.y + MoveDirection.y));
}