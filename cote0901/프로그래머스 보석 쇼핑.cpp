#include <string>
#include <vector>
#include <map>
#include <queue>
#include<iostream>
using namespace std;

vector<int> solution(vector<string> gems)
{
    vector<int> answer;
    answer.push_back(0);
    answer.push_back(0);
    map<string, int> m;
    for (int i = 0; i < gems.size(); i++)
    {
        m.emplace(gems[i], 1);
    }

    int iGemSize;
    iGemSize = m.size();
    m.clear();

    queue<string> q;

    int iStartAns = 0;
    int iEndAns = 0;
    int iDistance = gems.size() + 1;

    while (true) 
    {
        if (m.size() == iGemSize)
        { // 보석 다 찾음
            if (iEndAns - iStartAns < iDistance)
            { // 업데이트
                iDistance = iEndAns - iStartAns;
                answer[0] = iStartAns + 1;
                answer[1] = iEndAns;
            }
            
            if (m[gems[iStartAns]] == 1) { // 보석이 1개이면 map에서 삭제
                m.erase(gems[iStartAns]);
            }
            else { // 여러 개이면 갯수만 줄여준다.
                m[gems[iStartAns]]--;
            }
            iStartAns++;
        }
        else if (iEndAns == gems.size())
            break;

        else if (m.size() < iGemSize) { // 다 못찾았으면 보석개수 늘려주면서 진행
            m[gems[iEndAns]]++;
            iEndAns++;
        }
    }
    return answer;
}
   

int main()
{
    vector<string> v1;
    v1.push_back("DIA");
    v1.push_back("RUBY");
    v1.push_back("RUBY");
    v1.push_back("DIA");
    v1.push_back("DIA");
    v1.push_back("EMERALD");
    v1.push_back("SAPPHIRE");
    v1.push_back("DIA");

    vector<int> a1;
     a1  = solution(v1);

     for (int i = 0; i < a1.size(); i++)
     {
         cout << a1[i] << endl;
     }





}