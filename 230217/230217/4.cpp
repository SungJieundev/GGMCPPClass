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

#pragma region "�����ձ�"

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
//	cout << "���� �ձ� ������ �����մϴ�" << endl;
//	cout << "���ӿ� �����ϴ� �ο��� �� ���Դϱ�? : ";
//	cin >> n;
//
//	players* pPlr = new players[n];
//
//	for (int i = 0; i < n; i++) {
//
//		cout << "�������� �̸��� �Է��ϼ��� : ";
//		cin >> name;
//		pPlr[i].setName(name);
//	}
//
//	cout << "�����ϴ� �ܾ�� " << before << " �Դϴ�." << endl;
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
//				cout << "���� ����" << endl;
//				before = curr;
//			}
//
//			else
//			{
//				cout << "���� ����" << endl;
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

	cout << "���⸦ �������� ���ڿ� 2���� �Է��Ͻÿ� : ";
	cin >> sa >> sb;

	cout << "���⸦ �������� �Ǽ� 2���� �Է��Ͻÿ� : ";
	cin >> fa >> fb;

	cout << "���⸦ �������� ���� 2���� �Է��Ͻÿ� : ";
	cin >> ia >> ib;

	cout << "swap() �Լ� ȣ�� �� ����Դϴ�";

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
//	cout << "�� ���� ������ �Է��Ͻðڽ��ϱ�?" << endl;
//	cin >> num;
//
//	for (int i = 0; i < num; i++) {
//
//		int data;
//		cout << "������ �Է��Ͻÿ�" << endl;
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
//		cout << "������ �Է��Ͻÿ�(����� -1) : ";
//		cin >> score;
//		if (score == -1) break;
//		scores.push_back(score);
//	}
//
//	vector<int>::iterator it = scores.begin();
//	while ((it != scores.end()))
//		sum += *it;
//	
//	// �����ڷ� �������� ����
//	for (auto& n : scores)
//		sum += n;
//
//	double avg = (double)sum / scores.size();
//
//	cout << avg;
//}

int main() {

	
}
