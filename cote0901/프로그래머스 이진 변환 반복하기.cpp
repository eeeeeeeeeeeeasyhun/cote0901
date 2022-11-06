#include <string>
#include <vector>
#include <bitset>
#include<iostream>
using namespace std;

int iCount=0 , iZeroNum = 0;
int S1(string Num)
{
    if (Num.length() == 1)
    {
        return iCount;
    }

    for (int i = 0; i < Num.length(); i++)
    {
        if (Num[i] == 0)
        {
            Num.erase(Num.begin() + i);//
            iZeroNum++;
        }
    }
 
    iCount++;
    int iTmp = Num.length();

    vector<int> v1;
    for (int i = 0; iTmp != 0; i++)
    {
        v1.push_back(iTmp % 2);
        iTmp = iTmp/2;
    }
    string Stmp;
    for (int i = 0; i<v1.size(); i++)
    {
        Stmp += to_string(v1[v1.size() - i-1]);
    
    }
    S1(Stmp); //´Ù½ÇÇà

}


vector<int> solution(string s)
{
    vector<int> answer;

    S1(s);
    answer.push_back(iCount);
    answer.push_back(iZeroNum);


    return answer;
}

int main()
{
    string k;

    cin >> k;
    vector<int> asw;

    asw = solution(k);
    for (int i = 0; i < 2; i++)
    {
        cout << asw[i];

    }
}