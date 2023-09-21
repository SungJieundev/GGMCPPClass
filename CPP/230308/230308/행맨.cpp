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

		// 공백 입력 예외처리
		while (goal == "")
		{
			cout << "목표 단어를 입력해주세요 : ";
			cin >> goal;
		}

		system("pause");
		system("cls");

		// 목표 단어의 길이만큼 설정
		for (int i = 0; i < goal.length(); i++)
		{
			currentWord.push_back('_');
		}

		while (currentWord != goal)
		{
			cout << "=========================================================================" << endl;
			cout << endl << currentWord << endl;

			cout << endl << "글자를 입력하시오: ";

			cin >> input;

			for (int i = 0; i < goal.length(); i++)
			{
				if (goal[i] == input) {

					currentWord[i] = input;
				}
			}
		}

		cout << endl << goal << endl;
		cout << endl << "성공하였습니다! ";

		system("pause");
	}
}
