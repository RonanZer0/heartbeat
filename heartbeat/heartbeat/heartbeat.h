#pragma once

#include "SFML/main.hpp"
#include "SFML/system.hpp"
#include "SFML/window.hpp"
#include "SFML/graphics.hpp"
#include "SFML/audio.hpp"

#include "GLEW/include/GL/GLEW.h"

#include "GameObject.h"

#include <iostream>
#include <chrono>

class Game {
	
	private:
		Game() {};
		Game(const Game&) = delete;
		Game(Game&&) = delete;
		void operator=(const Game&) = delete;
		void operator=(Game&&) = delete;
		GameObject* objects[1024];

	public:
		Game();
		~Game();
		static Game* instance();
		void Game::update();
		void Game::draw();
		void addObject(GameObject* obj);
		void delObject(GameObject* obj);
		sf::RenderWindow* win;
		sf::View* view;
	
};