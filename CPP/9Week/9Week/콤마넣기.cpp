#include<iostream>
#include<Stack>
#include<string>
using namespace std;

int main()
{
	int count = 0;
	int input = 0;
	stack<int> comma;

	cin >> input;

	while (input != 0)
	{
		comma.push(input % 10);
		input = input / 10;
	}

	while (!comma.empty())
	{
		if (comma.size() % 3 == 0) cout << ',';
		cout << comma.top();
		comma.pop();
	}
	
}