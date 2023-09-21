#include<iostream>
using namespace std;

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
}