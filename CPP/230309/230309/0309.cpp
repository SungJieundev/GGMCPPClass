#include<iostream>
using namespace std;

void swap(int &x, int &y) {

	int temp = x;
	x = y; 
	y = temp;
}

int main() {

	int dan;
	int i = 1;

	cout << "����ϰ� ���� ���� �Է��Ͻÿ�: ";
	cin >> dan;


	for (int i = 1; i < 10; i++) {
		cout << dan << " * " << i << " = " << dan * i << endl;
	}

	cout << endl;

	while (i < 10)
	{
		cout << dan << " * " << i << " = " << dan * i << endl;
		i++;
	}

	cout << endl;

	int arr[9] = { 1, 2, 3, 4, 5, 6, 7, 8, 9 };
	
	for (int elem : arr) {

		cout << dan << " * " << elem << " = " << dan * elem << endl;
	}

	cout << endl;
	i = 1;

	do {
		cout << dan << " * " << i << " = " << dan * i << endl;
		i++;
	} while (i < 10);


#pragma region "������ ���� ���� ����"

	char input = ' ';
	cout << "�����ڸ� �Է��ϰ� 1�� �Է��ϼ���";
	
	char vowel[5] = { 'a', 'e', 'i', 'o', 'u'};

	int vowelcnt = 0;
	int consonantcnt = 0;
	int count = 0;

	while (input != '1')
	{
		cin >> input;

		for (char elem : vowel) 
		{
			if (input == elem) 
			{
				vowelcnt++;
			}
		}
		count++;
	}

	cout << "����: " << vowelcnt << endl;
	cout << "����: " << --count - vowelcnt;
#pragma endregion

#pragma region "���� ���߱� ����"

	int goal = 0;
	srand((unsigned int)time(NULL));
	goal = rand() % 100 + 1;

	cout << endl << goal;
#pragma endregion
	
#pragma region "swap"

	int x, y;

	cin >> x >> y;
	cout << x << y << endl;

	::swap(x, y);
	cout << x << y << endl;

#pragma endregion



}