#include "Engine.h"

void Engine::draw() {
	m_Window.clear(Color::White);

	m_Window.draw(m_BackgroundSprite);
	m_Window.draw(m_student->getSprite());

    for (auto & entity : entities) {
        m_Window.draw(entity->getSprite());
    }

	m_Window.display();
}