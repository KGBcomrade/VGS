#include "Student.h"
//#include <math.h>
//#include <assert.h>
//#include <ctime>

Student_t::Student_t()
{
// ��������� � ���������� �������� student
m_Speed = 400;

// ��������� �������� � ������
m_Texture.loadFromFile("bob.png");
m_Sprite.setTexture(m_Texture);

// ������������� ��������� ������� student � ��������
m_Position.x = 300;
m_Position.y = 300;

}

// ������ ��������� ������ ��������� ��� ������� draw()
Sprite Student_t::getSprite()
{
	return m_Sprite;
}

void Student_t::moveLeft()
{
	m_LeftPressed = true;
}

void Student_t::moveRight()
{
	m_RightPressed = true;
}

void Student_t::stopLeft()
{
	m_LeftPressed = false;
}

void Student_t::stopRight()
{
	m_RightPressed = false;
}

// ������� student �� ��������� ����������������� ����� � ���� �����,
// ���������� ������� � ��������
void Student_t::update(float elapsedTime)
{
	if (m_RightPressed)
	{
		m_Position.x += m_Speed * elapsedTime;
	}

	if (m_LeftPressed)
	{
		m_Position.x -= m_Speed * elapsedTime;
	}

	// ������ �������� ������ �� ����� �������
	m_Sprite.setPosition(m_Position);
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