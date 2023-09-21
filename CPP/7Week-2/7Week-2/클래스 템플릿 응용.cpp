#include <iostream>
using namespace std;

template < class T>
class Circle
{
public:
	T x;
	T y;
	T radius;
	static const double PI;

	Circle(T x, T y, T radius) : x{ x }, y{ y }, radius{ radius } {}

	T getArea()
	{
		return radius * radius * PI;
	}
};

template < class T>
const double Circle<T>::PI = 3.14;

int main()
{
	Circle<int> c1{ 1, 1, 5 };
	Circle<double> c2{ 1.5, 1.5, 5.0 };
	cout << c1.getArea() << endl;
	cout << c2.getArea() << endl;
}