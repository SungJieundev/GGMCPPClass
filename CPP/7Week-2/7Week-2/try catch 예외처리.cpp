#include <iostream>
using namespace std;

int main()
{

	int pizza_slices = 0;
	int persons = -1;
	int slices_per_person = 0;

	

	try
	{
		cout << "���� �������� �Է��Ͻÿ�: ";
		cin >> pizza_slices;
		
		if (pizza_slices < 0 || pizza_slices == 0)
		{
			throw pizza_slices;
		}

	}
	catch(int e)
	{
		cout << "���� ������" << e << "��" << endl;
	}

	try
	{
		cout << "������� �Է��Ͻÿ�: ";
		cin >> persons;

		if (persons == 0 || persons < 0)
		{
			throw persons;
		}

		slices_per_person = pizza_slices / persons;
			cout << "�� ����� ���ڴ� " << slices_per_person << "�Դϴ�.";
	}
	catch (int e)
	{
		cout << "�����" << e << "��";
	}
}