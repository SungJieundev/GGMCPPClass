#include<vector>
#include<queue>
using namespace std;

int solution(vector<vector<int>> maps) 
{
	int dx[4] = { 1, 0, -1, 0 };
	int dy[4] = { 0, 1, 0, -1 };
	int col = maps.size();
	int row = maps[0].size();
	queue<pair<int, int>> q;
	vector<vector<int>> visited;
	visited.resize(col, vector<int>(row, -1));
	q.push({ 0, 0 });
	visited[0][0] = 1;

	while (!q.empty())
	{
		int x = q.front().first;
		int y = q.front().second;

		q.pop();

		for (int i = 0; i < 4; i++)
		{
			int nx = x + dy[i];
			int ny = y + dx[i];
			if (nx < 0 || ny < 0 || nx >= col || ny >= row) continue;
			if (visited[nx][ny] == -1 && maps[nx][ny] == 1) 
			{
				q.push({ nx, ny });
				visited[nx][ny] = visited[nx][ny] + 1;
			}
		}
	}

	return visited[col - 1][row - 1];
}