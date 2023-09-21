#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main()
{

	int n, mid, left, right;
	// 내가 고른 어떤 값이 배열의 몇 번째에 있는지 이분탐색으로 찾기
	

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