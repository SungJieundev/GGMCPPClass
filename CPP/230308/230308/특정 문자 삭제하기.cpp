#include<iostream>
#include<string>
using namespace std;

int main() {

	string id;
	cout << "�ֹε�Ϲ�ȣ�� �Է��Ͻÿ�: ";
	getline(cin, id);

	cout << "-�� ���ŵ� �ֹε�Ϲ�ȣ: " << id.erase(id.find("-"), 1) << endl;
}