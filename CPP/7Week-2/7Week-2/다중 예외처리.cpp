#include <iostream>
using namespace std;

int main()
{
	int age = 0;
	try {

		cin >> age;

		if (age < 0) throw "����� �Է��ϼ���";
		if (age > 25 && age < 120) throw "û�ҳ��� �ƴմϴ�";
		if(age > 120) throw age;

	}
	catch (const char* e) {

		cout << "����: " << e << endl;

	}
	catch (int e) {

		cout << "����: " << e << " ���� û�ҳ��� �ƴմϴ�." << endl;
	}

	cout << age << "���� û�ҳ� �Դϴ�.";
}

