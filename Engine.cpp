#include "Engine.h"
//#include <iostream>

Engine::Engine() {
	Vector2f resolution;
	resolution.x = 800; //VideoMode::getDesktopMode().width;
	resolution.y = 800; //VideoMode::getDesktopMode().height;
	m_Window.create(VideoMode(resolution.x, resolution.y),
		"VGGame",
		Style::Default);
	m_BackwardTexture.loadFromFile("nobob.jpg");
	m_BackgroundSprite.setTexture(m_BackwardTexture);
}

void Engine::start() {
	Clock clock;

	while (m_Window.isOpen()) {
		Time dt = clock.restart();
		float dtAsSeconds = dt.asSeconds();
		input();
		update(dtAsSeconds);
		draw();
	}
}

