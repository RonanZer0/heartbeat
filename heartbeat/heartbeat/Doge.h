#pragma once
#include "GameObject.h"

class Doge : public GameObject {

public:
	Doge();
	Doge(float x, float y);
	~Doge();

	void update();
	void draw(sf::RenderWindow* win);
};

