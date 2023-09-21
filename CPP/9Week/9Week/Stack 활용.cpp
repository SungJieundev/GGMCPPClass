#include<iostream>
#include<Stack>
using namespace std;

int main()
{
	stack<char> s1;
	stack<char> s2;

	s1.push('d');
	s1.push('a');
	s1.push('t');
	s1.push('a');

	s2.push('s');
	s2.push('t');
	s2.push('a');
	s2.push('c');
	s2.push('k');

	while (!s1.empty())
	{
		cout << s1.top() << endl;
		s1.pop();
	}

	while (!s2.empty())
	{
		cout << s2.top() << endl;
		s2.pop();
	}
}