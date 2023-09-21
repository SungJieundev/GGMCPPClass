#include<iostream>
using namespace std;

int main() {

	int goal = 0;
	int input = 0;
	int count = 0;

	srand((unsigned int)time(NULL));

	goal = rand() % 100 + 1;

	while (input != goal)
	{
		cout << "정답을 추측하여 보시오: ";
		cin >> input;

		if (input < goal) {

			cout << "제시한 정수가 낮습니다." << endl;
			count++;
		}
		else if(input > goal)
		{
			cout << "제시한 정수가 높습니다." << endl;
			count++;
		}
	}


	cout << "축하합니다. 시도 횟수 = " << count;
}