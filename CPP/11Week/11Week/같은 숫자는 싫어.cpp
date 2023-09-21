#include <vector>
#include <iostream>
#include <queue>

using namespace std;

queue<int> q;

vector<int> solution(vector<int> arr)
{
    vector<int> answer;



    for (int i = 0; i < arr.size(); i++)
    {
        if (q.empty())
        {
            q.push(arr[i]);
        }
        else
        {
            if (arr[i] != q.back())
            {
                q.push(arr[i]);
            }
        }
    }

    while (!q.empty())
    {
        answer.push_back(q.front());
        q.pop();
    }

    return answer;
}
