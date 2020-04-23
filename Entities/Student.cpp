#include "Student.h"
//#include <math.h>
//#include <assert.h>
//#include <ctime>




void Student::update(float elapsedTime)
{
	if (m_RightPressed)
	{
		position.x += m_Speed * elapsedTime;
	}

	if (m_LeftPressed)
	{
        position.x -= m_Speed * elapsedTime;
	}

	sprite->setPosition(position);
}

void Student::moveLeft()
{
    m_LeftPressed = true;
}

void Student::moveRight()
{
    m_RightPressed = true;
}

void Student::stopLeft()
{
    m_LeftPressed = false;
}

void Student::stopRight()
{
    m_RightPressed = false;
}

Student::Student(sf::Vector2f position) : Entity(position, contentManagerLoadTexture("bob.png")){
    this->m_Speed = 400;
}

/*string Random(vector<string> m) {
	srand(time(0));
	int vl = m.size();
	string a = m[rand() % vl];
	return a;
}

int main() {
	vector<string> math_q1 = { "aaa", "bbb", "ccc", "ddd" };
	string b;
	b = Random(math_q1);
	cout << b;
	system("pause");
	return 0;
}*/