#include<iostream>
#include<stack>
using namespace std;

int main()
{
	string bracket;
	stack<int> bracketNums;
	int num = 0;

	cout << "수식      : ";
	cin >> bracket;
	cout << "괄호 번호 : ";

	for (int i = 0; i < bracket.length(); i++)
	{
		//( ( ) ( ( ) ) )
		//1 2 2 3 4 4 3 1

		if (bracket[i] == '(')
		{
			num++; //1
			bracketNums.push(num);
			cout << bracketNums.top();
		}
		else if (bracket[i] == ')')
		{
			//num--;

			cout << bracketNums.top();
			bracketNums.pop();
		}
	}
}