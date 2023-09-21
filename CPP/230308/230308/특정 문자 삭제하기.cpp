#include<iostream>
#include<string>
using namespace std;

int main() {

	string id;
	cout << "주민등록번호를 입력하시오: ";
	getline(cin, id);

	cout << "-가 제거된 주민등록번호: " << id.erase(id.find("-"), 1) << endl;
}