#include <string>
#include <vector>
#include <algorithm>
#include <iostream>
#include <cmath>
using namespace std;
bool PrimeNumber(long long n)
{
    if (n < 2)
        return false;

    for (int i = 2; i <= sqrt(n); i++)
    {
        if (n % i == 0)
            return false;
    }
    return true;
}

int solution(int n, int k)
{
    int answer = 0;

    string s = "";
    //   7 / 3 
      // 21 -> 12
    while (n > 0)
    {
        s += to_string(n % k);
        n /= k;
    }
    reverse(s.begin(), s.end());
    s += "0";
    
    string sTemp;

    for (int i = 0; i < s.length(); i++)
    {
        //1230
        //123 0
        //123 
        if (s[i] == '0')
        {
            if (!sTemp.empty() && PrimeNumber(stoll(sTemp)))
            {
                answer++;
            }
             sTemp.clear();
        }
        else
            sTemp += s[i];
    }

    return answer;
}