#include <iostream>
using namespace std;

#pragma region "������ ������"

//int AddOne(int a) {
//
//	static int count;
//	cout << ++count << endl;
//
//	return ++a;
//}
//
//int a;
//int main() {
//
//	int a = 5;
//	int* pA;
//	pA = &a;
//
//	cout << a << endl;
//	cout << *pA << endl;
//
//	*pA = 50;
//
//	cout << a << endl;
//	//::a = 3;
//	//cout << a << ::a << AddOne(a) << AddOne(a) << AddOne(a);
//}
#pragma endregion

#pragma region "pointer"

//void swap(int* x, int* y) {
//
//	int temp;
//	temp = *x;
//
//	*x = *y; // x = 3;
//	*y = temp; // y = 1;
//}
//int main() {
//
//	int x = 1;
//	int y = 3;
//	
//	cout << x << y << endl;
//	swap(&x, &y);
//	cout << x << y << endl;
//}

#pragma endregion

#pragma region "ref"

//void swap(int& a, int& b) {
//
//	int temp = a;
//
//	a = b;
//	b = temp;
//}
//
//int main() {
//
//	int x = 1, y = 2;
//
//	cout << x << y;
//	swap(x, y);
//	cout << x << y;
//}
#pragma endregion
// ������ ���� / ����, ������ ����
// ���� ���� ������ �� ���� / �Ѱ��ִ� ���� ������ ����
// �Ѱ��ַ��� ���� ���� ����� ���� ���. / ������ �������� ���� ���� / �����ʹ� �ּҺ��� 4byte 


#pragma region "Quiz"

// 1. 100 100 100
 
// 2. int& z = x; 
//	  z = y; 
// �� �� ����� �����ڴ� �ش纯���� �ı��Ǳ� �� ����
// �ٸ� ������ ������ �� ����.

// 3. int& y = 2000;
// �����ڿ��� ������ �Ҵ��� �� ������, ���� �Ҵ� �� �� ����.

// 4. 10 10

// 5. const int x = 100;
//    double* y = &x
// �������� ����� �Ҵ��Ϸ��� ������ �ڷ����� �ٸ��� ������ 
// �Ҵ��� �� ����.
// ���� const�� ������ �� ���� ������ �����Ͽ� ������ �Ұ��ϴ�.

//int main() {
//
//	const int x = 100;
//	double* y = &x;
//}

// 6. �����Ϳ��� �ּҰ� �ƴ�, ���� �Ҵ� �� �� ����.

// 7. 
//int main() {
//
//	int sample[5] = { 5, 10, 15, 20, 25 };
//
//	cout << *sample + 2 << endl; 
//	cout << *(sample + 2); // ???????????
//}

// �迭�� �̸��� �迭�� ù ��° ���Ҹ� ����Ŵ
// 7 ù ��° ���� + 2
// 15 �� ��° ������ ��
#pragma endregion

#pragma region "�����Ҵ�"

//int main()
//{
//
//	int studentCount;
//
//	cout << "�� ���� ���������� �Է��Ͻðڽ��ϱ�? ";
//	cin >> studentCount;
//
//	int* scores = new int[studentCount];
//	cout << studentCount << " �� ���� ������ �Է��Ͻÿ�" << endl;
//	
//	for (int i = 0; i < studentCount; i++) {
//		cin >> scores[i];
//	}
//
//	for (int i = 0; i < studentCount; i++) {
//
//		cout << i + 1 << "��° ����� ������ " << scores[i] << "�Դϴ�";
//	}
//
//	delete[] scores;
//}
#pragma endregion

#pragma region "struct"

struct Car
{
	int num;
	double gas;
};

void show(Car car) {
	cout << "���� ��ȣ�� " << car.num << ", ������ ���� " << car.gas << "�Դϴ�" << endl;
}
void show(Car* car) {
	cout << "���� ��ȣ�� " << car->num << ", ������ ���� " << car->gas << "�Դϴ�" << endl;
}

int main() {

	Car car = {1, 2};
	show(car);
	show(&car);
}



#pragma endregion

