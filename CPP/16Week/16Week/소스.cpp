#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main()
{

	int n, mid, left, right;
	// ���� �� � ���� �迭�� �� ��°�� �ִ��� �̺�Ž������ ã��
	

	int a[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };

	cin >> n;

	left = a[0];
	right = a[9];

	while (left <= right)
	{
		mid = (left + right) / 2;

		if (mid > n)
		{
			right = mid - 1;
		}
		else
		{
			left = mid + 1;
		}
	}

	cout << a[mid];
}