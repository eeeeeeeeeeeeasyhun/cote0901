#include<string>
#include <iostream>
#include<stack>
using namespace std;

bool solution(string s)
{
    bool answer = false;

    stack<int> a, b;

    for (int i = 0; i < s.length(); i++)
    {

        if (s[i] == '(')
        {
            a.push(1);
        }
        else if (!a.empty() && s[i] == ')')
        {
            a.pop();
        }

        else
        {
            a.push(2);
            break;
        }

    }

    if (a.empty())
    {
        answer = true;
    }




    return answer;

}

void main()
{
    string a;
    cin >> a;
    cout << solution(a);

}
