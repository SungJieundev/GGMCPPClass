#include<iostream>
#include<string>
using namespace std;

class Book
{
public:
	Book(string name, int price) : name{ name }, price { price } {}
	
	string name;
	int price;

	void print() {
		cout << "���� : " << name << "  " << "���� : " << price << endl; 
	}
};

int main(void) {
	Book books[2]{
		Book("��� C++", 25000),
		Book("��� C", 22000)
	};

	cout << "�����ϰ� �ִ� å ����" << endl;
	cout << "==============================" << endl;
	for (Book& b : books) b.print();
	cout << "==============================" << endl;
}