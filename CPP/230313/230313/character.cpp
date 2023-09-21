#include<iostream>
using namespace std;

class Character {
public:

	int x, y, hp;
	Character(int x, int y, int hp) : x{x}, y{y}, hp{hp} {}
	void setX(int x)
	{
		this->x = x;
	}
	void print()
	{
		cout << "x: " << x << " y: " << y << " HP: " << hp << endl;
	}
};

int main()
{
	cout << "Ä³¸¯ÅÍ #1" << endl;
	Character a(0, 0, 100);

	for (int i = 0; i < 100; i += 10)
	{
		a.setX(i);
		a.print();
	}
}