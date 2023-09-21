#include<iostream>
#include<Windows.h>
using namespace std;

int main() {

	int num1 = 0;
	int num2 = 0;

	int answer = 0;

	srand((unsigned int)time(NULL));

	while (true)
	{

		num1 = rand() % 100 + 1;
		num2 = rand() % 100 + 1;

		cout << "산수 문제를 자동으로 출제합니다." << endl;
		cout << num1 << " + " << num2 << " = ";
		cin >> answer;

		if (num1 + num2 == answer) {
			cout << "맞았습니다.";
			Sleep(1000);
		}
		else {
			cout << "틀렸습니다.";
			Sleep(1000);
		}

		system("cls");
	}
}