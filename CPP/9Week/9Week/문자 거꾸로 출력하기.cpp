#include<iostream>
#include<Stack>
using namespace std;

int main() 
{
	stack<char> s1;
	string s;

	cin >> s;
	
	for (int i = 0; i < s.length(); i++)
	{
		s1.push(s[i]);
	}

	while (!s1.empty())
	{
		cout << s1.top();
		s1.pop();
	}
}