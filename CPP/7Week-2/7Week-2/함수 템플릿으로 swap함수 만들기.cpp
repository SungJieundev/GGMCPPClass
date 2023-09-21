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
	
	cout << "띄어쓰기를 기준으로 문자열 2개를 입력하시오: ";
	cin >> s1 >> s2;

	cout << "띄어쓰기를 기준으로 실수 2개를 입력하시오: ";
	cin >> f1 >> f2;

	cout << "띄어쓰기를 기준으로 정수 2개를 입력하시오: ";
	cin >> i1 >> i2;

	cout << "Swap() 함수 호출 결과 입니다." << endl;

	Swap(s1, s2);
	Swap(f1, f2);
	Swap(i1, i2);

	cout << s1 << " " << s2 << endl;
	cout << f1 << " " << f2 << endl;
	cout << i1 << " " << i2 << endl;

}