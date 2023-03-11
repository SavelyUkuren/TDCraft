#include "Scene.h"

Scene::Scene()
{

}

void Scene::AddActor(Actor* actor)
{
	Actors.push_back(actor);
}

void Scene::draw(RenderTarget& target, RenderStates states) const
{
	for (Actor *actor : Actors) {
		target.draw(*actor);
	}
}
