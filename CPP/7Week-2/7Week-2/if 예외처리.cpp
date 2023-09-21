#include <iostream>
using namespace std;

int main()
{

	int pizza_slices = 0;
	int persons = -1;
	int slices_per_person = 0;

	cout << "피자 조각수를 입력하시오: ";
	cin >> pizza_slices;
	cout << "사람수를 입력하시오: ";
	cin >> persons;

	if (pizza_slices < 0) {

		cout << "피자 조각이 음수임";
	}
	else if (pizza_slices == 0) {

		cout << "피자 조각이 0임";
	}
	else {

		if (persons == 0) { cout << "사람이 0명 입니다."; }
		else if (persons < 0) { cout << "사람이 음수입니다."; }
		else {

			slices_per_person = pizza_slices / persons;
			cout << "한 사람당 피자는 " << slices_per_person << "입니다.";
		}
	}
}

