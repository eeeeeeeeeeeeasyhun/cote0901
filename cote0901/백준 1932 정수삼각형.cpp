#include <string>
#include <vector>
#include <algorithm>
#include<iostream>

using namespace std;
int dp[501][501];
int solution(vector<vector<int>> triangle)
{
    int answer = 0;
    dp[0][0] = triangle[0][0];

    int iSize = triangle.size();

    for (int i = 1; i < iSize; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            if (j == 0) //맨ㄴ왼쪽
            {
                dp[i][j] = triangle[i][j] + dp[i - 1][j];
            }

            else if (j == i) //맨오른쪽
            {
                dp[i][j] = triangle[i][j] + dp[i - 1][j - 1];
            }
            else //나머지
            {
                dp[i][j] = triangle[i][j] + max(dp[i - 1][j], +dp[i - 1][j - 1]);
            }
        }

    }
    for (int i = 0; i < iSize; i++)
    {
        answer = max(answer, dp[iSize - 1][i]);
    }
    return answer;
}

int main()
{
    vector<vector< int>> v1;
    int n;
    cin >> n;
    for (int i = 1; i < n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            int iTmp;
            v1[i].push_back(iTmp);

        }

    }

    cout << solution(v1) << endl;
}