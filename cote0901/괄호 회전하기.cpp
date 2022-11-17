#include <string>
#include <vector>
#include <stack>
using namespace std;

int solution(string s)
{
    stack<char> s1;
    int answer = 0;

    for (int i = 0; i < s.length(); i++)
    {
        for (int j = 0; j < s.length(); j++)
        {
            if()

            else if (s[i] == '[')
                s1.push('[');

            else if (s[i] == '(')
                s1.push('(');

            else if (s[i] == '{')
                s1.push('{');


            else if (s[i] == ']' && s1.top() == '[')
            {
                s1.pop();
            }

            else if (s[i] == '}' && s1.top() == '{')
            {
                s1.pop();
            }

            else if (s[i] == ')' && s1.top() == '(')
            {
                s1.pop();
            }

            else
                break;
        }
        if(s1.empty())
            answer++;



    }
    return answer;
}