#include<iostream>
#include<string>
#include<queue>
using namespace std;

int n, x;
string s;
queue<int> q1;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	cin >> n;

	for (int i = 0; i < n; i++)
	{
		cin >> s;

		if (s == "push")
		{
			cin >> x;
			q1.push(x);
		}
		else if (s == "pop")
		{
			if (!q1.empty())
			{
				cout << q1.front() << '\n';
				q1.pop();
			}
			else cout << -1 << '\n';

		}
		else if (s == "size")
		{
			cout << q1.size() << '\n';
		}
		else if (s == "empty")
		{
			cout << q1.empty() << '\n';
		}
		else if (s == "front")
		{
			if (!q1.empty()) cout << q1.front() << '\n';
			else cout << -1 << '\n';
		}
		else if(s == "back")
		{
			if (!q1.empty()) cout << q1.back() << '\n';
			else cout << -1 << '\n';
		}
	}

}