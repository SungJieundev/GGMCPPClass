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
		cout << "������ �����Ͽ� ���ÿ�: ";
		cin >> input;

		if (input < goal) {

			cout << "������ ������ �����ϴ�." << endl;
			count++;
		}
		else if(input > goal)
		{
			cout << "������ ������ �����ϴ�." << endl;
			count++;
		}
	}


	cout << "�����մϴ�. �õ� Ƚ�� = " << count;
}