#pragma once

#include "../Actor/Actor.h"
#include <iostream>

class Character: public Actor {

	float Speed;

	sf::Clock clock;
	float DeltaTime;

public:
	Character();

	void SetSpeed(const float Speed);
	float GetSpeed() const;

	void Move(sf::Vector2f Direction);

};