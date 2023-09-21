#include<iostream>
#include<string>
using namespace std;

int main() {

	string dna1;
	string dna2;

	int hamming = 0;

	cout << "DNA1: ";
	getline(cin, dna1);

	cout << "DNA2: ";
	getline(cin, dna2);

	for (int i = 0; i < dna1.size(); i++) {

		if (dna1[i] == dna2[i]) {

			hamming++;
		}
	}

	cout << "해밍 거리는 " << hamming << endl;
}