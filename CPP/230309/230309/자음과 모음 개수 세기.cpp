#include<iostream>
using namespace std;

int main() {
	char input = ' ';
	cout << "영문자를 입력하고 1을 입력하세요";

	char vowel[5] = { 'a', 'e', 'i', 'o', 'u' };

	int vowelcnt = 0;
	int consonantcnt = 0;
	int count = 0;

	while (input != '1')
	{
		cin >> input;

		for (char elem : vowel)
		{
			if (input == elem)
			{
				vowelcnt++;
			}
		}
		count++;
	}

	cout << "모음: " << vowelcnt << endl;
	cout << "자음: " << --count - vowelcnt;
}