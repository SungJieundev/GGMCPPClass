#include <iostream>
using namespace std;

#pragma region "변수와 스코프"

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
// 값으로 전달 / 참조, 포인터 전달
// 값에 직접 접근할 수 없음 / 넘겨주는 값에 접근이 가능
// 넘겨주려는 값의 복사 비용이 많이 든다. / 참조는 복사비용이 들지 않음 / 포인터는 주소복사 4byte 


#pragma region "Quiz"

// 1. 100 100 100
 
// 2. int& z = x; 
//	  z = y; 
// 한 번 연결된 참조자는 해당변수가 파괴되기 전 까지
// 다른 변수에 연결할 수 없다.

// 3. int& y = 2000;
// 참조자에는 변수만 할당할 수 있으며, 값을 할당 할 수 없다.

// 4. 10 10

// 5. const int x = 100;
//    double* y = &x
// 포인터의 형명과 할당하려는 변수의 자료형이 다르기 때문에 
// 할당할 수 없다.
// 또한 const는 변경할 수 없기 때문에 접근하여 변경이 불가하다.

//int main() {
//
//	const int x = 100;
//	double* y = &x;
//}

// 6. 포인터에는 주소가 아닌, 값을 할당 할 수 없다.

// 7. 
//int main() {
//
//	int sample[5] = { 5, 10, 15, 20, 25 };
//
//	cout << *sample + 2 << endl; 
//	cout << *(sample + 2); // ???????????
//}

// 배열의 이름은 배열의 첫 번째 원소를 가리킴
// 7 첫 번째 원소 + 2
// 15 세 번째 원소의 값
#pragma endregion

#pragma region "동적할당"

//int main()
//{
//
//	int studentCount;
//
//	cout << "몇 명의 시험점수를 입력하시겠습니까? ";
//	cin >> studentCount;
//
//	int* scores = new int[studentCount];
//	cout << studentCount << " 명 분의 점수를 입력하시오" << endl;
//	
//	for (int i = 0; i < studentCount; i++) {
//		cin >> scores[i];
//	}
//
//	for (int i = 0; i < studentCount; i++) {
//
//		cout << i + 1 << "번째 사람의 점수는 " << scores[i] << "입니다";
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
	cout << "차량 번호는 " << car.num << ", 연료의 양은 " << car.gas << "입니다" << endl;
}
void show(Car* car) {
	cout << "차량 번호는 " << car->num << ", 연료의 양은 " << car->gas << "입니다" << endl;
}

int main() {

	Car car = {1, 2};
	show(car);
	show(&car);
}



#pragma endregion

