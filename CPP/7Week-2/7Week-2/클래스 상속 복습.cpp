#include <iostream>
#include<string.h>
using namespace std;

class Human {
public:
	string name;
	int age;

	Human(string name, int age) : name{ name }, age{ age }{}
	
	void print()
	{
		cout << "�̸��� " << name << " ���̴� " << age << "�� �Դϴ�.";
	}
	
};

class Student : public Human {

	string major;

	Student() : Human(name, age), 
};

int main()
{
	Human chunhyang { "����", 18 };
	Human mongryong { "����", 21 };
	chunhyang.print();
	mongryong.print();

}