#include<iostream>
using namespace std;

int factorial(int n) {

	if (n == 0 || n == 1) return 1;
	else return n * factorial(n - 1);
}


int main() {

	int num = 0;

	cout << "팩토리얼 값을 구하고 싶은 숫자를 입력하세요 : ";
	cin >> num;

	cout << num << "! = " << factorial(num);
}

