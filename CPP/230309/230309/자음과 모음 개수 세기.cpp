#include<iostream>
using namespace std;

int main() {
	char input = ' ';
	cout << "�����ڸ� �Է��ϰ� 1�� �Է��ϼ���";

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

	cout << "����: " << vowelcnt << endl;
	cout << "����: " << --count - vowelcnt;
}