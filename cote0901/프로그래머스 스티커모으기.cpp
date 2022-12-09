#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int solution(vector<int> sticker)
{
    int dp[100001];
    int dp2[100001];
    int answer = 0;

    if (sticker.size() == 1)
    {
        return sticker[0];
    }
    if (sticker.size() == 2)
    {
        return max(sticker[0], sticker[1]);
    }
    dp[0] = sticker[0];
    dp[1] = sticker[0];

    dp2[0] = 0;
    dp2[1] = sticker[1];
    for (int i = 2; i < sticker.size() - 1; i++)
    {
        dp[i] = max(sticker[i] + dp[i - 2], dp[i - 1]);
    }
    for (int i = 2; i < sticker.size(); i++)
    {
        dp2[i] = max(sticker[i] + dp2[i - 2], dp2[i - 1]);
    }


    answer = max(dp[sticker.size() - 2], dp2[sticker.size() - 1]);


    return answer;
}