#include <iostream>
#include<time.h>
#include<string>
#include<Windows.h>

using namespace std;

int main()
{
	#pragma region "�ִ��� ���� ���"
	
		int money = 0;
		int candy = 0;
	
		cout << "���� ������ �ִ� ��: ";
		cin >> money;
	
		cout << "ĵ���� ����: ";
		cin >> candy;
	
		cout << "�ִ�� �� �� �ִ� ĵ���� ����: " << money / candy << endl;
		cout << "ĵ�� ���� �� ���� ��: " << money % candy << endl;
	
	#pragma endregion
	
	#pragma region "����"
	
		srand((unsigned int)time(NULL));
		int randomNum = rand();
	
	#pragma endregion
	
	#pragma region "ģ���ϰ� �λ��ϱ�"
	
		string address;
		string name;
	
		cout << "�̸��� �Է��Ͻÿ�: ";
		cin >> name;
	
		cin.ignore();
	
		cout << "�ּҸ� �Է��Ͻÿ�: ";
		getline(cin, address);
	
		cout << address << "�� " << name << "�� �ȳ��ϼ���?" << endl;
	
	#pragma endregion
}