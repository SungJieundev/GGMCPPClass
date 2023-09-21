#include <iostream>
#include <string>
#include <deque>
using namespace std;
int main()
{
	string order, nums, num;
	int t, numSize;
	cin >> t;

	for (int i = 0; i < t; i++)
	{
		deque<int> deq;
		cin >> order >> numSize >> nums;

		for (int i = 0; i < numSize; i++)
		{
			if (nums[i] >= '0' && nums[i] <= '9') num += nums[i];
				
		}
	}
}