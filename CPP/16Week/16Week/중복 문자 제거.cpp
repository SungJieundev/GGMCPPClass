#include <string>
#include <unordered_set>
#include<iostream>

using namespace std;

string solution(string my_string) {
    string answer = "";

    unordered_set<char> s1;

    for(char c : my_string)
    {
        if (s1.find(c) == s1.end())
        {
            s1.insert(c);
            answer.push_back(c);
        }  
    }

    return answer;
}

int main()
{
    cout << solution("people") << "\n";
    cout << solution("We are the world");   

}
