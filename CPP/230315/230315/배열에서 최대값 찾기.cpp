#include<iostream>;

using namespace std;

int main() {

	int arr[10];
	int maxValue = 0;

	srand((unsigned int)time(NULL));

	for (int i = 0; i < 10; i++) {

		arr[i] = rand() % 100 + 1;
		cout << arr[i] << " ";
		
		if (arr[i] > maxValue) {
			maxValue = arr[i];
		}
	}

	cout << endl << "�ִ밪 = " << maxValue;
}