#include<set>
#include <unordered_set>
#include<iostream>
using namespace std;

int main()
{
	set<string>  s1;
	set<string>  s2;
	string cantSound;
	string cantSee;
	int N, M;

	cin >> N >> M;

	for (int i = 0; i < N; i++) {
		cin >> cantSound;
		s1.insert(cantSound);
	}

	for (int i = 0; i < M; i++)
	{
		cin >> cantSee;
		if (s1.find(cantSee) != s1.end())
		{
			s2.insert(cantSee);
		}
	}

	cout << s2.size() << endl;

	for (auto iter : s2)
	{
		cout << iter << "\n";
	}

}