#include "Doge.h"

Doge::Doge() : GameObject() {
	
}

Doge::Doge(float x, float y) : GameObject(x, y) {
	
}

Doge::~Doge() {
	
}

void Doge::update() {
	x++;
}

void Doge::draw(sf::RenderWindow* win) {
	win->draw(*sprite);
}