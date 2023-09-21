
#include<iostream>
#include<Stack>
using namespace std;

int tenNum;
int twoNum;

stack<int> s;
void TenToTwo(int n)
{
	if (n == 1 || n == 0)
	{
		s.push(n);
		return;
	}
	if (n > 1)
	{
		s.push(n % 2);
		TenToTwo(n / 2);
	}

}

int main()
{
	cout << "10���� ���� �Է��ϼ��� : ";
	try
	{
		cin >> tenNum;

		if (tenNum < 0) throw tenNum;
	}
	catch (int n)
	{
		cout << "���� " << n << "�� �Է��ϼ̽��ϴ�. ����� �Է��ϼ���";
	}

	TenToTwo(tenNum);

	cout << "2������ ��ȯ�� �� : ";
	while (!s.empty())
	{
		cout << s.top();
		s.pop();
	}
}