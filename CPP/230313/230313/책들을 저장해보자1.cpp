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
		cout << "제목 : " << name << "  " << "가격 : " << price << endl; 
	}
};

int main(void) {
	Book books[2]{
		Book("어서와 C++", 25000),
		Book("어서와 C", 22000)
	};

	cout << "소장하고 있는 책 정보" << endl;
	cout << "==============================" << endl;
	for (Book& b : books) b.print();
	cout << "==============================" << endl;
}