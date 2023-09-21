#include<iostream>
using namespace std;


class Stack
{
public: 
	
	const static int SIZE = 10;

	int top;
	char name;
	char stackArr[SIZE];

public:
	Stack(char name = ' ') : name{name}, top{-1} { cout << "Constructing stack (" << name << ")" << "\n"; }
	
	void push(char ch)
	{
		if (top + 1 >= SIZE) 
			cout << "Stack (" << name << ") is full";
		else
		{
			stackArr[++top] = ch;
		}
	}

	char pop()
	{
		if (top == -1) {
			cout << "Stack (" << name << ") is empty";
			return 0;
		}
		else
		{
			return stackArr[top--];
		}
	}
};


int main() 
{
	Stack s1{'A'}, s2{'B'};

	s1.push('d');
	s1.push('a');
	s1.push('t');
	s1.push('a');

	s2.push('s');
	s2.push('t');
	s2.push('a');
	s2.push('c');
	s2.push('k');

	for (int i = 0; i < 5; i++)
		cout << "Pop s1: " << s1.pop() << "\n";

	cout << endl;

	for (int i = 0; i < 5; i++)
		cout << "Pop s2: " << s2.pop() << "\n";
}