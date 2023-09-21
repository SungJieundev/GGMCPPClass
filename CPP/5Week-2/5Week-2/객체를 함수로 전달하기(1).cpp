#include<iostream>
using namespace std;

class Complex
{
public:
	double real, imag;

	Complex() {

	}
	Complex(double a, double b)
	{
		real = a;
		imag = b;
	}

	void print()
	{
		cout << real << " + " << imag << "i" << endl;
	}
};

Complex add(Complex a, Complex b)
{
	Complex c(a.real + b.real, a.imag + b.imag);
	return c;
}


int main()
{
	Complex c1{ 1,2 }, c2{ 3,4 };
	Complex t;
	t = add(c1, c2);
	t.print();
}