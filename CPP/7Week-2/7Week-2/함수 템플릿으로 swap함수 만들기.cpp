#include<iostream>
#include<string.h>
using namespace std;

template < class T>
void Swap(T& a, T& b)
{
	T temp = a;
	a = b;
	b = temp;
}
int main()
{
	string s1, s2;
	float f1, f2;
	int i1, i2;
	
	cout << "���⸦ �������� ���ڿ� 2���� �Է��Ͻÿ�: ";
	cin >> s1 >> s2;

	cout << "���⸦ �������� �Ǽ� 2���� �Է��Ͻÿ�: ";
	cin >> f1 >> f2;

	cout << "���⸦ �������� ���� 2���� �Է��Ͻÿ�: ";
	cin >> i1 >> i2;

	cout << "Swap() �Լ� ȣ�� ��� �Դϴ�." << endl;

	Swap(s1, s2);
	Swap(f1, f2);
	Swap(i1, i2);

	cout << s1 << " " << s2 << endl;
	cout << f1 << " " << f2 << endl;
	cout << i1 << " " << i2 << endl;

}