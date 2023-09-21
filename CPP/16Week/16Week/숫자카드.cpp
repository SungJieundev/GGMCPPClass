#include <set>
#include<iostream>
using namespace std;

int main()
{

	int N, M, myCard, numCard = 0;

	set<int> s1;
	set<int> s2;

	cin >> N;
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	for (int i = 0; i < N; i++)
	{
		cin >> myCard;
		s1.insert(myCard);
	}

	cin >> M;

	for (int i = 0; i < M; i++)
	{
		cin >> numCard;
		s1.find(numCard) != s1.end() ? cout << "1 " : cout << "0 ";
	}
}