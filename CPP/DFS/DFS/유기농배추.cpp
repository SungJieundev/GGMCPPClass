#include <iostream>
using namespace std;

int testcase;
int board[51][51];
int visited[];

// ���α���, ���α���, ���� ����
int row, col, num;
int x; int y;

int main()
{
	cin >> testcase;

	while (testcase--) 
	{
		fill_n(board[0], 51 * 51, 0);
		fill_n(visited[0], 51 * 51, 0);

		int cnt = 0;

		cin >> row >> col >> num;

		for (int i = 0; i < num; i++)
		{
			cin >> x >> y;
			board[y][x] = 1;
		}

	}
}