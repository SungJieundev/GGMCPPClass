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

		cout << "��� ������ �ڵ����� �����մϴ�." << endl;
		cout << num1 << " + " << num2 << " = ";
		cin >> answer;

		if (num1 + num2 == answer) {
			cout << "�¾ҽ��ϴ�.";
			Sleep(1000);
		}
		else {
			cout << "Ʋ�Ƚ��ϴ�.";
			Sleep(1000);
		}

		system("cls");
	}
}