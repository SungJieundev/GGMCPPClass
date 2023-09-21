#include <iostream>
using namespace std;

int main()
{
	int age = 0;
	try {

		cin >> age;

		if (age < 0) throw "양수를 입력하세요";
		if (age > 25 && age < 120) throw "청소년이 아닙니다";
		if(age > 120) throw age;

	}
	catch (const char* e) {

		cout << "오류: " << e << endl;

	}
	catch (int e) {

		cout << "오류: " << e << " 살은 청소년이 아닙니다." << endl;
	}

	cout << age << "살은 청소년 입니다.";
}

