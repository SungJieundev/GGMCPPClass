#include <iostream>
#include <algorithm>

using namespace std;

int m, n;
int arr[100001];

void binarySearch(int num) {
	int left = 0, right = n - 1;

	while (left <= right)
	{
		int mid = (left + right) / 2;

		if (arr[mid] == num)
		{
			cout << 1 << "\n";
			return;
		}
		else if (arr[mid] > num)
			right = mid - 1;
		else if (arr[mid] < num)
			left = mid + 1;
	}
	cout << "0" << "\n";
	return;
}

int main()
{
	cin >> n;
	int num;

	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];
	}

	sort(arr, arr + n);

	cin >> m;

	for (int i = 0; i < m; i++)
	{
		cin >> num;
		binarySearch(num);
	}
}