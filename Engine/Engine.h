#pragma once
#include "Entities/Student.h"
#include <SFML/Graphics.hpp>
#include <vector>
//#include <iostream>

using namespace sf;

class Engine {
private:
	RenderWindow m_Window;
	Sprite m_BackgroundSprite;
	Texture m_BackwardTexture;
	vector<Entity*> entities;

	Student *m_student;

	void input();
	void update(float dtAsSeconds);
	void draw();
public:
	Engine();
	void start();	
};