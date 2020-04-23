#pragma once

#include <iostream>
#include <vector>
#include <string>
#include <SFML/Graphics.hpp>
#include <SFML/System.hpp>
#include "Entity.h"
#include "Engine/ContentManager.h"

//using namespace std;
using namespace sf;

class Student : public Entity{
public:
	explicit Student(sf::Vector2f position);
	//int health;

	void moveLeft();

	void moveRight();

	void stopLeft();

	void stopRight();

    void update(float elapsedTime) override;

private:
	//int course;
	//vector<string> course1 = { "math1", "physics1", "angem" };
	//vector<string> course2 = { "math2", "physics2", "diffequals" };



	bool m_LeftPressed{};
	bool m_RightPressed{};

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