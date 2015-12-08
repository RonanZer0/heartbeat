#include "heartbeat.h"

void Game::addObject(GameObject* obj) {
	for (int i = 0; i < 2048; i++) {
		if (objects[i] != nullptr) {
			
		}
	}
}

void Game::delObject(GameObject* obj) {
	for (int i = 0; i < 2048; i++) {
		if (objects[i] != nullptr && objects[i] == obj) {
			
		}
	}
}

void Game::update() {
	
}

void Game::draw() {
	
}

int main() {
	Game* game = new Game();

	delete game;

	return 0;
}

Game::Game() {
	
	for (int i = 0; i < 2048; i++) {
		objects[i] = nullptr;
	}

	this->win = new sf::RenderWindow(sf::VideoMode(256, 224), "Doge: The Game");

	view = new sf::View();
	view->setSize(256, 224);
	view->setCenter(view->getSize().x / 2, view->getSize().y / 2);

	win->setFramerateLimit(60);

	int time = 0;

	bool playing = false;

	sf::Texture menuTexture;
	menuTexture.loadFromFile("title.png");
	sf::Sprite menuSprite(menuTexture);

	while (win->isOpen()) {
		sf::Event event;
		while (win->pollEvent(event)) {
			if (event.type == sf::Event::Closed)
				win->close();
		}

		win->clear();

		win->setView(*view);
		if (playing) {
			time += 1;
		} else {
			if (sf::Keyboard::isKeyPressed(sf::Keyboard::Key::Return)) {
				playing = true;
			}

			//update();
			win->draw(menuSprite);
		}

		win->display();
	}
}

Game::~Game() {
	delete win;
	delete view;
}

/*sf::View getLetterboxView(sf::View view, int windowWidth, int windowHeight) {

// Compares the aspect ratio of the window to the aspect ratio of the view,
// and sets the view's viewport accordingly in order to archieve a letterbox effect.
// A new view (with a new viewport set) is returned.

float windowRatio = windowWidth / (float)windowHeight;
float viewRatio = view.getSize().x / (float)view.getSize().y;
float sizeX = 1.0;
float sizeY = 1.0;
float posX = 0.0;
float posY = 0.0;

bool horizontalSpacing = true;
if (windowRatio < viewRatio)
horizontalSpacing = false;

// If horizontalSpacing is true, the black bars will appear on the left and right side.
// Otherwise, the black bars will appear on the top and bottom.

if (horizontalSpacing) {
sizeX = viewRatio / windowRatio;
posX = (1.f - sizeX) / 2.f;
}

else {
sizeY = windowRatio / viewRatio;
posY = (1.f - sizeY) / 2.f;
}

view.setViewport(sf::FloatRect(posX, posY, sizeX, sizeY));

return view;
}*/
