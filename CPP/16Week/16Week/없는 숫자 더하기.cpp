#include <string>
#include <vector>
#include <unordered_set>

using namespace std;

int solution(vector<int> numbers) {
    int answer = -1;

    unordered_set<int> s1;

    for (int i : numbers)
    {
        s1.insert(i);
    }

    for (int i = 0; i < 10; i++)
    {
        if (s1.find(i) == s1.end())
        {
            answer += i;
        }
    }

    return answer;
}

int main()
{

}