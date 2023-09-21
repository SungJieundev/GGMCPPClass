#include <iostream>
#include <stack>
#include<vector>
using namespace std;
stack<double>s;
int alphabet[27], temp;

double calcPostfix(string str) {
    double op1, op2;
    char ch;
    for (int i = 0; i < str.size(); i++) {
        ch = str[i];
        if (ch != '+' && ch != '-' && ch != '*' && ch != '/') {
            // �Է��� �ǿ������̸� ���ÿ� ����
            s.push(alphabet[ ch -'A']);
        }
        else { // �������̸� �ǿ����ڸ� ���ÿ��� ����
            op2 = s.top();
            s.pop();
            op1 = s.top();
            s.pop();

            switch (ch) { // ������ �����ϰ� ���ÿ� ����
            case'+': 

                s.push(op1 + op2); break;
            case'-': 

                s.push(op1 - op2); break;
            case'*': 

                s.push(op1 * op2); break;
            case'/': 

                s.push(op1 / op2); break;
            }
        }
    }
    return s.top();
}

int main()
{
    int num;
    string str;
    cin >> num >> str;
    for (int i = 0; i < num; i++)
    {
        cin >> alphabet[i];

    }
    cout << fixed;                 //�Ҽ��� �ڸ��� ����
    cout.precision(2);
    cout << calcPostfix(str);

}