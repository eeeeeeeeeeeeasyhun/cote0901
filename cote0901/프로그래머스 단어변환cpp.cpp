#include <string>
#include <vector>
#include<iostream>

using namespace std;

int iReasult = 9999;
bool visit[51];
void dfs(string begin, string target, vector<string>& words, int iCount)
{
    if (begin == target)
    {
        iReasult = min(iCount, iReasult);
        return;
    }


    for (int i = 0; i < words.size(); i++)
    {
        int iTmp = 0;

        if (!visit[i])  //방문안한거
        {
            for (int j = 0; j < begin.length(); j++)
            {
                if (begin[j] != words[i][j])
                {
                    iTmp++;
                }
            }

            if (iTmp == 1) //하나다른경우만
            {
                visit[i] = true;
                dfs(words[i], target, words, iCount + 1);
                visit[i] = false;


            }
        }
    }

}


int solution(string begin, string target, vector<string> words) {

    dfs(begin, target, words, 0);

    if (iReasult == 9999) iReasult = 0;

    return iReasult;
}

int main()
{
    vector<string> v1;
    v1.push_back("hot");
    v1.push_back("dot");
    v1.push_back("dog");
    v1.push_back("lot");
    v1.push_back("log");
    v1.push_back("cog");


    cout << solution("hit", "cog", v1);

}