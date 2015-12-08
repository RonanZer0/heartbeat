#pragma once

#include "SFML/window.hpp"
#include "SFML/graphics.hpp"
#include "SFML/audio.hpp"

class GameObject {

protected:
	float x, y;
	int dx, dy;
	sf::Sprite* sprite;

public:
	GameObject();
	GameObject(float x, float y);
	~GameObject();

	float getX();
	float getY();
	void setX(float x);
	void setY(float y);
	virtual void update() {};
	virtual void draw(sf::RenderWindow* win) {};

};

