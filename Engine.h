#pragma once
#include "Student.h"
#include <SFML/Graphics.hpp>
//#include <iostream>

using namespace sf;

class Engine {
private:
	RenderWindow m_Window;
	Sprite m_BackgroundSprite;
	Texture m_BackwardTexture;

	Student_t m_student;

	void input();
	void update(float dtAsSeconds);
	void draw();
public:
	Engine();
	void start();	
};