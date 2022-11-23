#include <string>
#include <vector>
#include<iostream>
using namespace std;

int iCheck[201];

void dfs(int iCur, int iN, vector<vector<int>> computers)
{
    iCheck[iCur] = 1;

    for (int i = 0; i < iN; i++)
    {
        if (!iCheck[i] && computers[iCur][i])
        {
            dfs(i, iN, computers);
        }
    }
}

int solution(int n, vector<vector<int>> computers)
{
    int answer = 0;

    for (int i = 0; i < n; i++)
    {
        if (!iCheck[i])
        {
            dfs(i, n, computers);

            answer++;
        }
    }

    return answer;
}

int main()
{
    vector<vector<int>> tmp;
    vector<int> k;
    int N;
    cin >> N;
    for (int i = 0; i < N; i++)
    {
        int a, b, c;
        cin >> a >> b >> c;
        k.push_back(a);
        k.push_back(b);
        k.push_back(c);

        tmp.push_back(k);
    }

    cout << solution(N, tmp);


}