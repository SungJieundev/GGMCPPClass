#include <iostream>
#include <list>
using namespace std;

int main()
{
	ios::sync_with_stdio(NULL);
	cin.tie(NULL);
	int N, K;

	cin >> N >> K;

	list<int> circleList;

	for (int i = 1; i <= N; i++)
	{
		circleList.push_back(i);
	}

	list<int>::iterator iter = circleList.begin();

	cout << "<";

	while (N > 0)
	{
		for (int i = 1; i < K; i++)
		{
			iter++;
			if (iter == circleList.end()) iter = circleList.begin();
		}
		if (N == 1)
		{
			cout << *iter;
			break;
		}

		cout << *iter << ", ";
		N--;
		iter = circleList.erase(iter);
		if (iter == circleList.end()) iter = circleList.begin();
	}
}