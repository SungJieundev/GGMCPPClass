#include<iostream>
using namespace std;

int factorial(int n) {

	if (n == 0 || n == 1) return 1;
	else return n * factorial(n - 1);
}


int main() {

	int num = 0;

	cout << "���丮�� ���� ���ϰ� ���� ���ڸ� �Է��ϼ��� : ";
	cin >> num;

	cout << num << "! = " << factorial(num);
}

