#include <iostream>
using namespace std;

int main()
{

	int pizza_slices = 0;
	int persons = -1;
	int slices_per_person = 0;

	cout << "���� �������� �Է��Ͻÿ�: ";
	cin >> pizza_slices;
	cout << "������� �Է��Ͻÿ�: ";
	cin >> persons;

	if (pizza_slices < 0) {

		cout << "���� ������ ������";
	}
	else if (pizza_slices == 0) {

		cout << "���� ������ 0��";
	}
	else {

		if (persons == 0) { cout << "����� 0�� �Դϴ�."; }
		else if (persons < 0) { cout << "����� �����Դϴ�."; }
		else {

			slices_per_person = pizza_slices / persons;
			cout << "�� ����� ���ڴ� " << slices_per_person << "�Դϴ�.";
		}
	}
}

