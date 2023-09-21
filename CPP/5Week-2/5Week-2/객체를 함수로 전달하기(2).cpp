#include<iostream>
using namespace std;

class Complex
{
public:
	const double real, imag;

	
	Complex(double a, double b) : real{ a }, imag{ b }{}

	void print()
	{
		cout << real << " + " << imag << "i" << endl;
	}
};

Complex add(Complex a, Complex b)
{
	Complex com(a.real + b.real, a.imag + b.imag);
	return com;
}


int main()
{
	Complex c1{ 1,2 }, c2{ 3,4 };
	Complex t =  add(c1, c2);
	t.print();
}