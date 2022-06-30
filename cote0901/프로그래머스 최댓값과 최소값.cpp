#include <string>
#include <vector>
#include<iostream>
#include<algorithm>
using namespace std;

string solution(string s) {
    int iMax = 0;
    int iMin = 0;
    bool flag = false;
     
    stoi(s);
    string sTmp;
    vector<int> v1;
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] == ' ')
        {
            v1.push_back(stoi(sTmp));
            sTmp.clear();
        }
        else if (s[i] == '-')
        {
            sTmp += '-';
            sTmp += s[i + 1];
            i++;
        }
        else
        {
            sTmp += s[i];
        }
    }
    
    sort(v1.begin(), v1.end());
    string answer = "";
    answer += to_string(v1.back()) + " " + to_string(v1.front());
    return answer;


}
int main()   
{
    string a;
    cin >> a;
    solution(a);
       
}