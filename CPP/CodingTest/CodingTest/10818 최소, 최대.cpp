#include <iostream>
using namespace std;

int main()
{
	int min = 1000000, max = -1000000;
	int n, m;

	cin >> n;

	for (int i = 0; i < n; ++i) 
	{
		cin >> m;
		if (m < min) min = m;
		if (m > max) max = m;
	}

	cout << min << " " << max;
}