#include<iostream>
using namespace std;

class Pizza
{
	int radius;
public:
	Pizza(int r = 0) : radius { r }{ }
	~Pizza() 
	{

	}

	void setRadius(int r) 
	{
		radius = r;
	}
	void print() 
	{ 
		cout << "Pizza(" << radius << ")" << endl; 
	}
};

// 값 복사 전달
//void upgrade(Pizza p)
//{
//	p.setRadius(20);
//}

// 주소를 함수로 전달하기
void upgrade(Pizza *p) 
{ 
	//p->setRadius(20); 
	(*p).setRadius(20);
}

// 참조자 매개변수 사용하기
void upgrade(Pizza& p)
{
	p.setRadius(20);
}

int main() 
{

	Pizza obj(10);

	// 주소를 함수로 전달하기
	upgrade(&obj);
	upgrade(obj);

	// 참조자 매개변수 사용하기

	obj.print();
}