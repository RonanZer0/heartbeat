#include "GameObject.h"

GameObject::GameObject() {
	this->x = 0.0;
	this->y = 0.0;
	this->dx = this->x;
	this->dy = this->y;
}

GameObject::GameObject(float x, float y) {
	this->x = x;
	this->y = y;
	this->dx = this->x;
	this->dy = this->y;
}

GameObject::~GameObject() {
	delete sprite;
}

float GameObject::getX() {
	return x;
}

float GameObject::getY() {
	return y;
}

void GameObject::setX(float x) {
	this->x = x;
}

void GameObject::setY(float y) {
	this->y = y;
}