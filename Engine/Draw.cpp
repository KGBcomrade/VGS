#include "Engine.h"

void Engine::draw() {
	m_Window.clear(Color::White);

	m_Window.draw(m_BackgroundSprite);
	m_Window.draw(m_student->getSprite());

    for (int i = 0; i < entities.size(); ++i) {
        m_Window.draw(entities[i]->getSprite());
    }

	m_Window.display();
}