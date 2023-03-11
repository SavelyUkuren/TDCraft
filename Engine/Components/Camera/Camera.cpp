#include "Camera.h"

Camera::Camera()
{
}

void Camera::SetPosition(const sf::Vector2f Position)
{
	Object::SetPosition(Position);
	view.setCenter(Position);
}

void Camera::SetSize(const sf::Vector2f Size)
{
	Object::SetSize(Size);
	view.setSize(Size);
}

sf::View Camera::GetView() const
{
	return view;
}

