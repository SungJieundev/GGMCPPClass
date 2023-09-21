#include<iostream>

using namespace std;
int arr[100] = { 0, 1, 1 };

int fibonacci(int n) {

	if (n <= 2) return 1;
	else return fibonacci(n - 2) + fibonacci(n - 1);
}

int fibonaccis(int n) {

	if (arr[n] != 0) return arr[n];

	arr[n] = fibonaccis(n - 2) + fibonaccis(n - 1);
	return arr[n];
	
}

int main() {

	
	int num = 0;

	cout << "피보나치 수열의 n 번째를 출력합니다 : ";
	cin >> num;

	cout << fibonacci(num) << endl;
	cout << fibonaccis(num);
}