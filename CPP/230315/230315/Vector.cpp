#include<iostream>
#include<vector>

using namespace std;

//int main() {
//
//	vector<int> v;
//
//	for (int i = 0; i < 1000; i++) {
//		v.push_back(100);
//		cout << v.size() << " " << v.capacity() << endl;
//	}
//}

#pragma region "���� ��� ����ϱ�"

int main() {
	
	vector<int> scores;
	int score = 0;
	int sum = 0;

	while (true)
	{
		cout << "������ �Է��Ͻÿ� (����� -1) : ";
		cin >> score;
		
		if (score == -1) break;
		scores.push_back(score);
	}

	for (auto it : scores) {
		
		sum += it;
	}

	cout << sum / scores.size();

}
#pragma endregion


