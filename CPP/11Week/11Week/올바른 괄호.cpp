#include<string>
#include <iostream>
#include<stack>

using namespace std;

bool solution(string s)
{
	stack<char> st;

	if (s[0] == ')')
	{
		return false;
	}

	for (int i = 0; i < s.length(); i++)
	{
		if (s[i] == '(') 
		{
			st.push(s[i]);
		}
		else if(s[i] == ')')
		{
			if (st.empty())
			{
				return false;
			}
			else st.pop();
		}
		
	}

	return st.empty();
}