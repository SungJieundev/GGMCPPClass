#include <iostream>
using namespace std;

int main()
{
	int n, m;
	int i, j;
	
	cin >> n >> m;

	int* array = new int[n]; 

	for (int i = 0; i < n; i++)
	{
		array[i] = i + 1;
	}

	for (int a = 0; a < m; a++)
	{
		cin >> i >> j;
		
		int temp = array[i-1];
		array[i-1] = array[j-1];
		array[j-1] = temp;
	}

	for (int i = 0; i < n; i++)
	{
		cout << array[i] << " ";
	}
}