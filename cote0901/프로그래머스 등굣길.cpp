#include <string>
#include <vector>

using namespace std;
bool bWater[101][100];
int dp[101][101] = { 0, };

int solution(int m, int n, vector<vector<int>> puddles)
{
    dp[1][1] = 1;
    for (int i = 0; i < puddles.size(); i++)
    {                        //0.0 0.1 /x/y
        //0.0 0.1  1.0 1.1 // 2 2  0.1
        int iX = puddles[i][0];
        int iY = puddles[i][1]; //��������ǥ
        dp[iY][iX] = -1;
    }

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= m; j++)
        {
            if (i == 1 && j == 1)
                continue;

            if (dp[i][j] == -1)         
                dp[i][j] = 0;

            else
                dp[i][j] = (dp[i][j - 1] + dp[i - 1][j]) % 1000000007;
        }
    }
    int answer = dp[n][m];
    return answer;
}