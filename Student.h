#pragma once

#include <iostream>
#include <vector>
#include <string>
#include <SFML/Graphics.hpp>

//using namespace std;
using namespace sf;

class Student_t {
public:
	Student_t();
	//int health;
	Sprite getSprite();

	// Для движения student
	void moveLeft();

	void moveRight();

	// Прекращение движения
	void stopLeft();

	void stopRight();

	// Эта функция будет вызываться на каждый кадр
	void update(float elapsedTime);
private:
	//int course;
	//vector<string> course1 = { "math1", "physics1", "angem" };
	//vector<string> course2 = { "math2", "physics2", "diffequals" };
	Vector2f m_Position;

	// Объявляем объект Sprite
	Sprite m_Sprite;

	// Добавдяем текстуру
	Texture m_Texture;

	// Логические переменные для отслеживания направления движения
	bool m_LeftPressed;
	bool m_RightPressed;

	// Скорость student в пикселях в секунду
	float m_Speed;
};

/*class Teacher_t {
public:
	Teacher_t(double a_x = 0.0, double a_y = 0.0)
		: t_x(a_x),
		t_y(a_y) {
		std::cout << "I'm created\n";
	}

	~Teacher_t() { std::cout << "I'm deleted\n"; }
private:
	double t_x;
	double t_y;
	string subject;
	vector<string> math1_q;
	vector<string> phys1_q;
	vector<string> angem_q;
	vector<string> math2_q;
	vector<string> phys2_q;
	vector<string> diffequals_q;
};*/