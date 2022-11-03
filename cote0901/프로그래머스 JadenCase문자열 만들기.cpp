#include <string>
#include <vector>
#include<iostream>
using namespace std;

string solution(string s)
{
    string answer = "";

    bool flag = true;
    string sTmp;
    for (int i = 0; i < s.length(); i++)
    {
        if (flag == true && s[i] >= 'a' && s[i] <= 'z')
        {
            sTmp += s[i] - 32;
            flag = false;
        }

        else if (flag == false && s[i] >= 'A' && s[i] <= 'Z')
        {
            sTmp += s[i] + 32;
        }

        else if (s[i] >= '0' && s[i] <= '9')
        {
            sTmp += s[i];
            flag = false;
        }
        else if (s[i] == ' ')
        {
            answer += sTmp + " ";
            sTmp.clear();
            flag = true;
        }
        else
        {

            sTmp += s[i];
            flag = false;

        }

    }
    answer += sTmp;



    return answer;
}

void main()
{
    string s;
    getline(cin, s);
    cout << solution(s);


}