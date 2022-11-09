#include <iostream>
#include<string>
#include<stack>
using namespace std;

int solution(string s)
{
    int answer = -1;

    stack<char> checking;

    checking.push(s[0]);
    for (int i = 1; i < s.length(); i++)
    {
        if (checking.empty())
        {
            checking.push(s[i]);
        }
        else if (s[i] == checking.top())
        {
            checking.pop();
        }
        else
            checking.push(s[i]);

    }
    if (checking.empty())
    {
        answer = 1;
    }
    else
    {
        answer = 0;
    }

    return answer;
}