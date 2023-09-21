#include <iostream>
using namespace std;

class Box {
private:
	double length;
	double width;
	double height;
public:
	friend bool operator ==(const Box& box1, const Box& box2);
	friend bool operator <(const Box& box1, const Box& box2);
	friend Box operator +(const Box& box1, const Box& box2);

	static int count;

	Box(double length, double width, double height) : length{ length }, width{ width }, height{ height } 
	{
		count++;
	}

	double Volume()
	{
		return length * width * height;
	}
};

int Box::count = 0;
Box operator +(const Box& box1, const Box& box2)
{
	return Box (box1.length + box2.length, box1.width + box2.width, box1.height + box2.height);
}


bool operator ==(Box& box1, Box& box2)
{
	return box1.Volume() == box2.Volume();
}

bool operator <(Box& box1, Box& box2)
{
	return box1.Volume() < box2.Volume();
}

int main(void) {
	Box Box1(1.0, 2.0, 3.0);
	Box Box2(1.0, 2.0, 5.0);
	cout << "ÀüÃ¼ °´Ã¼ ¼ö: " << Box::count << endl;
	return 0;
}