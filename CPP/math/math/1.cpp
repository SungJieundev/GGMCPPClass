#include<iostream>
#include<Windows.h>

using namespace std;

int level = 1;

int Level1Up(int level) {

	return 5 * level + 5; 
}
int sum(int level) {

	return (10 + Level1Up(level)) * level * 0.5f;
}
int LevelUp(int level, int upLevel) {

	return sum((level + upLevel) -1) - sum(level - 1);
}

int main() {
	

	while (true) {

		cout << endl;

		cout << "���� ������ �Է��ϼ���: ";
		cin >> level;

		if (level == 0) break;
		cout << endl;
		cout << "1���� �� ���: " << Level1Up(level) << endl;
		cout << "5���� �� ���: " << LevelUp(level, 5) << endl;
		cout << "10���� �� ���: " << LevelUp(level, 10) << endl << endl;

		
		system("pause");
	}


}