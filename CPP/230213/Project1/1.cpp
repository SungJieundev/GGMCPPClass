#include <iostream>
#include <string>
using namespace std;
#pragma region "cout/cin"
// ���α׷��� ������
//int main() 
//{
	//char arr[100];
	//cout << "what's your name" << endl;

	// cin �� �Է� �޴� �����Ϳ��� ������ ������ ����� ����
	
	// cin >> arr;
	//cin.getline(arr, 100);
	//cout << "hi" << " " << arr;

	/*char name[10];
	char age[3];
	char say[100];

	cout << "what's your name?" << endl;
	cout << "How old are you?" << endl;

	cin >> name >> age;

	cout << "hi " << name << " You are " << age << " years old~!" << endl;
	cout << "Do you anything to say?" << endl;

	cin.ignore();

	cin.getline(say, 100);
	cout << say;*/
#pragma endregion

#pragma region "const"
//const double PI = 3.14;
//int Circle(double radius) 
//{
//	return PI * radius * radius;
//}
//
//int main(){
//
//	double radius;
//	cout << "���� �������� �Է��ϼ���" << endl;
//	cin >> radius;
//	cout << Circle(radius);
//}

#pragma endregion

#pragma region "string"
//string Change(string str) 
//{
//	for (int i = 0; i < str.length(); i++) {
//
//		if (str[i] == 'o') {
//
//			str[i] = 'x';
//		}
//	}
//
//	return str;
//}
//
//
//int main() {
//
//	/*string str = "hello";
//	cout << str.at(6);*/
//
//	cout << "���ڿ��� �Է��Ͻÿ� : " << endl;
//	string str;
//	cin >> str;
//	cout << Change(str);
//}
#pragma endregion

#pragma region "string2"

//void PushBack(string str) {
//
//	string  temp;
//
//	for (int i = 0; i < str.length(); i++) {
//
//		char front = str.front();
//		temp = str.substr(1, str.length() - 1);
//		temp.push_back(front);
//		cout << temp << endl;
//	}
//	
//
//}
//
//int main() {
//
//	string str;
//
//	cout << "��ĭ�� �����ϴ� ���ڿ��� �Է��Ͻÿ�" << endl;
//	getline(cin, str);
//
//	PushBack(str);
//}
#pragma endregion


#pragma region "Ternary operator"

//bool IsEven(int number) {
//
//	if (number % 2 == 0) {
//		return true;
//	}
//	else {
//		return false;
//	}
//}
//
//int main() {
//	int number;
//
//	cin >> number;
//    IsEven(number) ? cout << "¦���Դϴ�" : cout << "Ȧ���Դϴ�";
//}
#pragma endregion

#pragma region "switch"

//char Score(int score) {
//
//	switch (score / 10)
//	{
//		case 1:
//		case 2:
//		case 3:
//		case 4: 
//		// default :
//			return 'E';
//
//		case 5:
//		case 6:
//			return 'D';
//		case 7:
//			return 'C';
//		case 8:
//			return 'B';
//		case 9:
//		case 10:
//			return 'A';
//	
//	}
//}
//
//int main() {
//
//	int score;
//
//	cout << "������ �Է��Ͻÿ�" << endl;
//	cin >> score;
//	cout << "����� " << Score(score) << " �Դϴ�";
//}
#pragma endregion

void PrimeNumber(int number) {
	
	int count = 0;
	int primeCount = 0;

	for (int i = 2; i <= number; i++) {

		count = 0;

		for (int j = 2; j <= i; j++) {

			if (i % j == 0) {

				count++;
			}
		}

		if (count == 1) {

			cout << i << " ";
			primeCount++;
		}
	}

	cout << endl <<"2 ���� " << number << "������ �Ҽ� ������ " << primeCount << "�� �Դϴ�";
}

int main() {

	int number; 

	cout << "�Ҽ��� ���� �ִ� ���ڸ� �Է��Ͻÿ� :" << endl;
	cin >> number;

	PrimeNumber(number);
}

