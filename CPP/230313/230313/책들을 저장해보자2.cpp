#include <iostream>
using namespace std;

class Book
{
public:

	string name;
	int price;

	void print() {
		cout << "���� : " << name << "\t���� : " << price << endl;
	}
};
int main()
{
	int n;

	cout << "�� ����� å�� �����ϰ� �����Ű���? : ";
	cin >> n;

	Book* ptr = new Book[n];

	cout << "å�� �̸��� ������ ���⸦ �������� �Է��ϼ���." << endl;

	for (int i = 0; i < n; i++) {

		cin >> ptr[i].name >> ptr[i].price;
	}

	cout << "�����ϰ� �ִ� å ����" << endl;
	cout << "=======================" << endl;
	for (int i = 0; i < n; i++)
	{
		ptr[i].print();
	}
	cout << "=======================" << endl;
}