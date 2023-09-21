#include <iostream>
#include <stack>
#include <Windows.h>
using namespace std;

void BracketTest(stack<int>& stk, int index);

int main()
{
    string input;
    stack<int> BracketNums;

    cin >> input;

    for (int i = 0; i < input.length(); ++i)
    {
        if (input[i] == '{')
            BracketNums.push(1);
        else if (input[i] == '[')
            BracketNums.push(2);
        else if (input[i] == '(')
            BracketNums.push(3);
        else if (input[i] == '}')
            BracketTest(BracketNums, 1);
        else if (input[i] == ']')
            BracketTest(BracketNums, 2);
        else if (input[i] == ')')
            BracketTest(BracketNums, 3);
    }

    if (BracketNums.size() == 0)
        cout << "��ȣ �˻� ����";
    else
        cout << "��ȣ �˻� ����";
}

void BracketTest(stack<int>& BracketNums, int index)
{
    if (BracketNums.empty() || BracketNums.top() != index)
    {
        cout << "��ȣ �˻� ����";
        exit(1);
    }
    BracketNums.pop();
}