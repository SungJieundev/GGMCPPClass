#include <iostream>
#include <string>
#include <vector>

using namespace std;
#pragma region "0"

//int main() {
//
//	string str;
//
//	int a = 0, b = 0, c = 0;
//
//	cout << "���ڿ��� �Է��Ͻÿ� : ";
//	getline(cin, str);
//
//	for (auto& c : str) {
//
//		if (c == 'A' || c == 'a') {
//			a++;
//		}
//		else if (c == 'B' || c == 'b') {
//			b++;
//		}
//		else if (c == 'C' || c == 'c') {
//			c++;
//		}
//	}
//}
#pragma endregion

#pragma region "1"

//int main() {
//
//	int n, m, result = 0;
//
//	cout << "�ڿ��� n�� �ԷµǸ� 1���� n������ �� �� m�� ������� ����մϴ�." << endl;
//	cout << "n m �� �Է��ϼ���" << endl;
//
//	cin >> n >> m;
//	
//	for (int i = 0; i < n + 1; i++) {
//
//		if(i % m == 0) result += i;
//	}
//
//	cout << result << endl;
//}
#pragma endregion

#pragma region "2"

//int main() {
//
//	int a, b, result = 0;
//
//	cout << "�ڿ��� a�� b�� �ԷµǸ� a���� b������ ���� ���İ� �Բ� ����մϴ�." << endl;
//	cout << "a b �� �Է��ϼ���" << endl;
//
//	cin >> a >> b;
//
//	for (int i = a; i < b; i++) {
//
//		cout << i << " + ";
//		result += i;
//	}
//
//	cout << b << " = " << result + b;
//}
#pragma endregion

#pragma region "3"

//int main() {
//
//	int n, result = 0;
//	cout << "�ڿ��� n�� ������� ���� ���İ� �Բ� ����մϴ�." << endl;
//
//	cin >> n;
//
//	for (int i = 2; i < n; i++) {
//		if (n % i == 0) {
//			result += i;
//			cout << " + " << i;
//		}
//	}
//	cout << " = " << result << endl;
//
//	cout << " = " << result;
//}
#pragma endregion

#pragma region "4"

int main() {

    int n;
    cin >> n;

    vector<int> a;

    for (int i = 0; i < n; i++) {
        int data;
        cin >> data;
        a.push_back(data);
    }

    for (int i = a.size(); i > 0; i--) {
        for (int j = 0; j < i - 1; j++) {
            if (a[j] > a[j + 1]) {
                int temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
    }

    cout << a.back() - a.front();
}
#pragma endregion

#pragma region "5"

int main()
{
    string str = "";
    cin >> str;
    string result = "";
    for (int i = 0; i < str.size(); i++)
    {
        if (str[i] >= '0' && str[i] <= '9')
        {
            result += str[i];
        }
    }
    if (result.front() == '0') result.erase(result.begin());
    cout << result;
}
#pragma endregion

#pragma region "6"

int main() {
    string input, result = "";
    getline(cin, input);
    for (char c : input) {
        if (c >= 'a' && c <= 'z' || c >= 'A' && c <= 'Z') {
            result += tolower(c);
        }
    }
    cout << result;
}

#pragma endregion

#pragma region "7"

int main() {

    int n;
    cin >> n;

    vector<int> score;
    vector<int> result;

    for (int i = 0; i < n; i++) {
        int data;
        cin >> data;
        score.push_back(data);
        result.push_back(n + 1);
    }

    for (int i = 0; i < score.size(); i++) {
        for (int j = 0; j < score.size(); j++)
        {
            if (score[i] >= score[j]) {
                result[i]--;
            }
        }
    }

    for (int i = 0; i < result.size(); i++) {
        cout << result[i];
    }
}
#pragma endregion

