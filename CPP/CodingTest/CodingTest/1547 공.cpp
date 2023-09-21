#include <iostream>
#include <vector>
#include<string>
using namespace std;

int main()
{
	string cup;
	int m, x, y;

	cin >> m;

	for (int i = 0; i < 3; i++)
	{
		cup.push_back(i + 1);
	}

	for (int i = 0; i < m; i++)
	{
		cin >> x >> y;

		int idx1 = cup.find(x);
		int idx2 = cup.find(y);

		int temp = cup[idx1];
		cup[idx1] = cup[idx2];
		cup[idx2] = temp;
	}

	cout << to_string(cup[0]);
}