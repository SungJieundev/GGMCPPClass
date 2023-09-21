#include <iostream>
using namespace std;

class Book
{
public:

	string name;
	int price;

	void print() {
		cout << "제목 : " << name << "\t가격 : " << price << endl;
	}
};
int main()
{
	int n;

	cout << "총 몇권의 책을 저장하고 싶으신가요? : ";
	cin >> n;

	Book* ptr = new Book[n];

	cout << "책의 이름과 가격을 띄어쓰기를 기준으로 입력하세요." << endl;

	for (int i = 0; i < n; i++) {

		cin >> ptr[i].name >> ptr[i].price;
	}

	cout << "소장하고 있는 책 정보" << endl;
	cout << "=======================" << endl;
	for (int i = 0; i < n; i++)
	{
		ptr[i].print();
	}
	cout << "=======================" << endl;
}