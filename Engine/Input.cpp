#include "Engine.h"

void Engine::input() {
	if (Keyboard::isKeyPressed(Keyboard::Escape)) {
		m_Window.close();
	}
	if (Keyboard::isKeyPressed(Keyboard::A)) {
		m_student->moveLeft();
	}
	else {
		m_student->stopLeft();
	}
	if (Keyboard::isKeyPressed(Keyboard::D)) {
		m_student->moveRight();
	}
	else {
		m_student->stopRight();
	}
}