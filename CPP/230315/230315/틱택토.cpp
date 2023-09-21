#include<iostream>

using namespace std;

int main() {

	char board[3][3];
	int x, y, k, i, player = 0;

	fill(&board[0][0], &board[2][2] + 1, ' ');

	for (k = 0; k < 9; k++) {
		cout << "(x, y) ÁÂÇ¥: ";
		cin >> x >> y;

		if (player == 0)
		{
			board[x][y] = 'O';
			player = 1;
		}
		else if (player == 1)
		{
			board[x][y] = 'X';
			player = 0;
		}

		for (i = 0; i < 3; i++) {
			cout << "---|---|---" << endl;
			cout << board[i][0] << "  | " << board[i][1] << " |  " << board[i][2] << endl;
		}
		cout << "---|---|---" << endl;
	}

}