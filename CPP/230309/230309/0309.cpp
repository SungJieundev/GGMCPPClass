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

	cout << "출력하고 싶은 단을 입력하시오: ";
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


#pragma region "자음과 모음 개수 세기"

	char input = ' ';
	cout << "영문자를 입력하고 1을 입력하세요";
	
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

	cout << "모음: " << vowelcnt << endl;
	cout << "자음: " << --count - vowelcnt;
#pragma endregion

#pragma region "숫자 맞추기 게임"

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