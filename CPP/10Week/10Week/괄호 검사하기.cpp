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
        cout << "괄호 검사 성공";
    else
        cout << "괄호 검사 실패";
}

void BracketTest(stack<int>& BracketNums, int index)
{
    if (BracketNums.empty() || BracketNums.top() != index)
    {
        cout << "괄호 검사 실패";
        exit(1);
    }
    BracketNums.pop();
}