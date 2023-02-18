#include <iostream>
#include <vector>
#include<string>

using namespace std;

#pragma region Classcircle

//class Circle
//{
//    double radius;
//
//public:
//    double getArea() {
//        return pow(radius, 2) * 3.14;
//    }
//    double getRadius() {
//        return radius;
//    }
//    void setRadius(double r) {
//        radius = r;
//    }
//    double getPerimeter() {
//        return radius * 2;
//    }
//};
//
//int main() {
//    cout << "Circle 1: " << endl;
//    Circle circle1;
//    circle1.setRadius(10.0);
//    cout << "Radius: " << circle1.getRadius() << endl;
//    cout << "Area: " << circle1.getArea() << endl;
//    cout << "Perimeter: " << circle1.getPerimeter() << endl;
//}
#pragma endregion

#pragma region "끝말잇기"

//class players {
//	string name;
//
//public:
//
//	void setName(string name) {
//
//		this->name = name;
//	}
//
//	void showName() {
//
//		cout << name << " >> ";
//	}
//};
//
//int main() {
//
//	int n;
//	string name, before = "love", curr;
//
//	cout << "끝말 잇기 게임을 시작합니다" << endl;
//	cout << "게임에 참가하는 인원은 몇 명입니까? : ";
//	cin >> n;
//
//	players* pPlr = new players[n];
//
//	for (int i = 0; i < n; i++) {
//
//		cout << "참가자의 이름을 입력하세요 : ";
//		cin >> name;
//		pPlr[i].setName(name);
//	}
//
//	cout << "시작하는 단어는 " << before << " 입니다." << endl;
//
//	int flag = 1;
//	while (flag) {
//
//		for (int i = 0; i < n; i++) {
//			pPlr[i].showName();
//			cin >> curr;
//			cout << before << "  " << curr << endl;
//
//			if (before[before.size() - 2] == curr[0] && before[before.size() - 1] == curr[1]) {
//				cout << "다음 차례" << endl;
//				before = curr;
//			}
//
//			else
//			{
//				cout << "게임 종료" << endl;
//				flag = 0;
//			}
//		}
//	}
//}
#pragma endregion

#pragma region "template"

template<class T>
void swap(T& a, T&) {
	
	T temp;

	temp = a;
	a = b;
	b = temp;
}
int main() {

	string sa, sb;
	float fa, fb;
	int ia, ib;

	cout << "띄어쓰기를 기준으로 문자열 2개를 입력하시오 : ";
	cin >> sa >> sb;

	cout << "띄어쓰기를 기준으로 실수 2개를 입력하시오 : ";
	cin >> fa >> fb;

	cout << "띄어쓰기를 기준으로 정수 2개를 입력하시오 : ";
	cin >> ia >> ib;

	cout << "swap() 함수 호출 후 결과입니다";

	::swap(sa, sb);
	cout << sa << " " << sb << endl;

	::swap(fa, fb);
	cout << fa << " " << fb << endl;

	::swap(ia, ib);
	cout << ia << " " << ib << endl;
}
#pragma endregion

#pragma region "vector"

//int main() {
//
//	int num;
//	vector<int> v1;
//
//	cout << "몇 개의 정수를 입력하시겠습니까?" << endl;
//	cin >> num;
//
//	for (int i = 0; i < num; i++) {
//
//		int data;
//		cout << "정수를 입력하시오" << endl;
//		cin >> data;
//		v1.push_back(data);
//	}
//}
#pragma endregion

//int main() {
//
//	vector<int> scores;
//	int score, sum = 0;
//
//	while (true)
//	{
//		cout << "성적을 입력하시오(종료는 -1) : ";
//		cin >> score;
//		if (score == -1) break;
//		scores.push_back(score);
//	}
//
//	vector<int>::iterator it = scores.begin();
//	while ((it != scores.end()))
//		sum += *it;
//	
//	// 참조자로 복사비용을 없앰
//	for (auto& n : scores)
//		sum += n;
//
//	double avg = (double)sum / scores.size();
//
//	cout << avg;
//}

int main() {

	
}
