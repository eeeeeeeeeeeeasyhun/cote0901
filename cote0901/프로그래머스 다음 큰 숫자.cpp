#include <string>
#include <vector>
#include <bitset>
using namespace std;

string toBinery(int n)
{
    string S = bitset<16>(n).to_string();
    return S;
}

int Counting(string s)
{
    int iNum = 0;
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] == '1')
            iNum++;
    }
    return iNum;
}
int solution(int n)
{
    int answer = 0;
    string start = toBinery(n);
    int i1Num = Counting(start);

    for (int i = n + 1;; i++)
    {
        string binary = toBinery(i);
        if (i1Num == Counting(binary))
        {
            answer = i;
            break;
        }
    }



    return answer;

}