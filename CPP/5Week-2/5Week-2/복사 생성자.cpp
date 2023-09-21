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

// �� ���� ����
//void upgrade(Pizza p)
//{
//	p.setRadius(20);
//}

// �ּҸ� �Լ��� �����ϱ�
void upgrade(Pizza *p) 
{ 
	//p->setRadius(20); 
	(*p).setRadius(20);
}

// ������ �Ű����� ����ϱ�
void upgrade(Pizza& p)
{
	p.setRadius(20);
}

int main() 
{

	Pizza obj(10);

	// �ּҸ� �Լ��� �����ϱ�
	upgrade(&obj);
	upgrade(obj);

	// ������ �Ű����� ����ϱ�

	obj.print();
}