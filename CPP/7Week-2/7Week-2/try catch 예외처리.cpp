#include <iostream>
using namespace std;

int main()
{

	int pizza_slices = 0;
	int persons = -1;
	int slices_per_person = 0;

	

	try
	{
		cout << "피자 조각수를 입력하시오: ";
		cin >> pizza_slices;
		
		if (pizza_slices < 0 || pizza_slices == 0)
		{
			throw pizza_slices;
		}

	}
	catch(int e)
	{
		cout << "피자 조각이" << e << "임" << endl;
	}

	try
	{
		cout << "사람수를 입력하시오: ";
		cin >> persons;

		if (persons == 0 || persons < 0)
		{
			throw persons;
		}

		slices_per_person = pizza_slices / persons;
			cout << "한 사람당 피자는 " << slices_per_person << "입니다.";
	}
	catch (int e)
	{
		cout << "사람이" << e << "임";
	}
}