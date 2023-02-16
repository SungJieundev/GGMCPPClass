#include <iostream>
#include <time.h>
#include <Windows.h>
using namespace std;

#pragma region "srand"

//int main() {
//	srand((unsigned int)time(NULL));
//	int randomNum = rand() % 14 + 1;
//
//	cout << "��ǥ�� �����? : ";
//	cout << randomNum << endl; 
//}
#pragma endregion

#pragma region "�̱� ���α׷�"
//int main() {
//
//	int count;
//	
//	cout << "�� �ο��� ���� : ";
//	cin >> count;
//
//	string* name = new string[count];
//
//	cout << "�̸� �Է�" << endl;
//
//	for (int i = 0; i < count; i++) {
//
//		cin >> name[i];
//	}
//
//	while (true)
//	{
//		cout << "1�� ������ �̱� / ����� 0" << endl;
//
//		int key;
//		cin >> key;
//
//		if (key == 1) {
//			cout << "�̱⸦ �����մϴ�" << endl;
//			Sleep(1000);
//			srand((unsigned int)time(NULL));
//
//			int random = rand() % count;
//			cout << "��ǥ�� �����? : " << name[random] << endl;
//		}
//		else if (key == 0) {
//			break;
//		}
//
//		delete[] name;
//	}

#pragma endregion

#pragma region "��������"
//void add(int* x1, int* x2, int a){
//	
//	*x1 += a;
//	*x2 += a;
//}
//
//void add(int& x1, int& x2, int a) {
//
//	x1 += a;
//	x2 += a;
//}
//
//int main() {
//
//	int x1, x2, a;
//	cout << "2������ ���� ������ �߰��� ������ �Է��Ͻÿ� : ";
//	cin >> x1 >> x2 >> a;
//	
//	//add(x1, x2, a);
//	add(&x1, &x2, a);
//
//	cout << "2���� ���������� ������ �߰��� �� ������ " << x1 << " " << x2;
//}

#pragma endregion

#pragma region "scissorsrockpaper"

//int main() {
//
//	int count_win = 0;
//	int count_same = 0;
//	int count_lose = 0;
//
//	int player;
//	int bot;
//	enum scissorsrockpaper { SCISSORS = 1, ROCK, PAPER , END };
//
//	while (1) {
//
//		system("cls");
//
//		cout << "��ȣ�� �����ϼ���." << endl 
//			 << "1.���� 2.���� 3.�� 4.����" << endl 
//			 << "player : ";
//
//		cin >> player;
//
//		if (player == END) {
//
//			break;
//		}
//
//		srand((unsigned int)time(NULL));
//		bot = rand() % 3 + 1;
//
//		switch (bot)
//		{
//		case SCISSORS:
//			cout << "bot : ����" << endl;
//			break;
//		case ROCK:
//			cout << "bot : ����" << endl;
//			break;
//		case PAPER:
//			cout << "bot : ��" << endl;
//			break;
//		}
//
//		int result = player - bot;
//
//		switch (result) {
//
//		case 0:
//			count_same++;
//			cout << "*** ���º� ***" << endl;
//			break;
//
//		case1:
//			count_win++;
//			cout << "*** �¸� ***" << endl;
//			break;
//		default:
//			count_lose++;
//			cout << "*** �й� ***" << endl;
//		}
//
//		cout << "�� : " << count_win << " �� : " << count_lose << " ���º� : " << count_same;
//
//
//		system("pause");
//	}
//}

#pragma endregion
#pragma region "BINGO"

int main() {
	srand(unsigned int(time(NULL)));
	int num[25] = {};
	for (int i = 0; i < 25; i++)
		num[i] = i + 1;

	//shuffle
	int temp, idx1, idx2;
	for (int i = 0; i < 100; i++) {
		idx1 = rand() % 25;
		idx2 = rand() % 25;
		temp = num[idx1];
		num[idx1] = num[idx2];
		num[idx2] = temp;
	}
	int bingo = 0, target = 0;

	cout << "��ǥ ������� ? : ";
	cin >> target;

	while (true)
	{
		system("cls");
		//���ڸ� 5*5�� ���
		for (int i = 0; i < 5; i++) {
			for (int j = 0; j < 5; j++)
			{
				if (num[i * 5 + j] == -1)
					cout << "*" << "\t";
				else
					cout << num[i * 5 + j] << "\t";
			}
			cout << "\n";
		}

		cout << "target line : " << target << " bingo line : " << bingo << endl << endl;

		if (bingo >= target)
		{
			cout << "##   ##   ####    ##   ## " << endl;
			cout << "##   ##    ##     ###  ##" << endl;
			cout << "##   ##    ##     #### ##" << endl;
			cout << "## # ##    ##     ## ####" << endl;
			cout << "#######    ##     ##  ###" << endl;
			cout << "### ###    ##     ##   ##" << endl;
			cout << "##   ##   ####    ##   ##" << endl;
			system("pause");
		}

		cout << "���ڸ� �Է��ϼ���(����:0) : ";
		int input;
		cin >> input;
		if (input == 0) break;
		else if (input < 1 || input>25) continue;
		for (int i = 0; i < 25; i++) {
			if (input == num[i])
			{
				num[i] = -1;
				break;
			}
		}

		// ���� ī����
		bingo = 0;

		for (int i = 0; i < 5; i++)
		{
			int h_star = 0, v_star = 0;
			for (int j = 0; j < 5; j++)
			{
				if (num[5 * i + j] == -1)
					h_star++; // ����
				if (num[5 * j + i] == -1)
					v_star++; // ����
			}
			if (h_star == 5) bingo++;
			if (v_star == 5) bingo++;
		}

		int d_star = 0;
		for (int i = 0; i <= 25; i += 6)
		{
			if (num[i] == -1) d_star++;
		}
		if (d_star == 5) bingo++;

		d_star = 0;
		for (int i = 4; i <= 20; i += 4)
		{
			if (num[i] == -1) d_star++;
		}
		if (d_star == 5) bingo++;
	}

	
}
#pragma endregion
