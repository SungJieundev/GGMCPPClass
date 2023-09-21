#include <iostream>
#include<time.h>
#include<string>
#include<Windows.h>

using namespace std;

int main()
{
	#pragma region "최대의 사탕 사기"
	
		int money = 0;
		int candy = 0;
	
		cout << "현재 가지고 있는 돈: ";
		cin >> money;
	
		cout << "캔디의 가격: ";
		cin >> candy;
	
		cout << "최대로 살 수 있는 캔디의 개수: " << money / candy << endl;
		cout << "캔디 구입 후 남은 돈: " << money % candy << endl;
	
	#pragma endregion
	
	#pragma region "랜덤"
	
		srand((unsigned int)time(NULL));
		int randomNum = rand();
	
	#pragma endregion
	
	#pragma region "친근하게 인사하기"
	
		string address;
		string name;
	
		cout << "이름을 입력하시오: ";
		cin >> name;
	
		cin.ignore();
	
		cout << "주소를 입력하시오: ";
		getline(cin, address);
	
		cout << address << "의 " << name << "씨 안녕하세요?" << endl;
	
	#pragma endregion
}