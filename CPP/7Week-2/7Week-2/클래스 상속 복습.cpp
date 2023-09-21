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
		cout << "ÀÌ¸§Àº " << name << " ³ªÀÌ´Â " << age << "¼¼ ÀÔ´Ï´Ù.";
	}
	
};

class Student : public Human {

	string major;

	Student() : Human(name, age), 
};

int main()
{
	Human chunhyang { "ÃáÇâ", 18 };
	Human mongryong { "¸ù·æ", 21 };
	chunhyang.print();
	mongryong.print();

}