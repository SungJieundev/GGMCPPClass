#include<iostream>
#include<string>
#include<queue>
using namespace std;

int main()
{
	queue<int> q;
	int n;
	int f, b, t;
	cin >> n;

	for (int i = 1; i <= n; i++)
	{
		q.push(i);
	}

	while (q.size() > 1)
	{
		q.pop();
		t = q.front();
		q.pop();
		q.push(t);
	}

	cout << q.front();
}