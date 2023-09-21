
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
	cout << "10진수 값을 입력하세요 : ";
	try
	{
		cin >> tenNum;

		if (tenNum < 0) throw tenNum;
	}
	catch (int n)
	{
		cout << "음수 " << n << "를 입력하셨습니다. 양수로 입력하세요";
	}

	TenToTwo(tenNum);

	cout << "2진수로 변환한 값 : ";
	while (!s.empty())
	{
		cout << s.top();
		s.pop();
	}
}