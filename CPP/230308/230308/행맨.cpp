#include <iostream>
#include<string>
#include<Windows.h>

using namespace std;

int main() {

	string goal;
	string currentWord = "";

	char input = ' ';

	while (1) {

		system("cls");

		currentWord = "";
		goal = "";

		// ���� �Է� ����ó��
		while (goal == "")
		{
			cout << "��ǥ �ܾ �Է����ּ��� : ";
			cin >> goal;
		}

		system("pause");
		system("cls");

		// ��ǥ �ܾ��� ���̸�ŭ ����
		for (int i = 0; i < goal.length(); i++)
		{
			currentWord.push_back('_');
		}

		while (currentWord != goal)
		{
			cout << "=========================================================================" << endl;
			cout << endl << currentWord << endl;

			cout << endl << "���ڸ� �Է��Ͻÿ�: ";

			cin >> input;

			for (int i = 0; i < goal.length(); i++)
			{
				if (goal[i] == input) {

					currentWord[i] = input;
				}
			}
		}

		cout << endl << goal << endl;
		cout << endl << "�����Ͽ����ϴ�! ";

		system("pause");
	}
}
