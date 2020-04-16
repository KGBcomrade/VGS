#include "Student.h"
//#include <math.h>
//#include <assert.h>
//#include <ctime>

Student_t::Student_t()
{
// Вписываем в переменную скорость student
m_Speed = 400;

// Связываем текстуру и спрайт
m_Texture.loadFromFile("bob.png");
m_Sprite.setTexture(m_Texture);

// Устанавливаем начальную позицию student в пикселях
m_Position.x = 300;
m_Position.y = 300;

}

// Делаем приватный спрайт доступным для функции draw()
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

// Двигаем student на основании пользовательского ввода в этом кадре,
// прошедшего времени и скорости
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

	// Теперь сдвигаем спрайт на новую позицию
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