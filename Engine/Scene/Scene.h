#pragma once

#include <iostream>
#include <SFML/Graphics.hpp>

#include "../Components/Object/Object.h"
#include "../Components/Actor/Actor.h"

#ifndef LEVEL
#define LEVEL

using namespace std;
using namespace sf;

class Scene: public Drawable {

	vector<Actor*> Actors;

public:
	Scene();

	void AddActor(Actor *actor);

private:
	virtual void draw(RenderTarget &target, RenderStates states) const;
};

#endif