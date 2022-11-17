#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int solution(vector<int> citations)
{
    int answer = 0;
    int iSize = citations.size();

    sort(citations.begin(), citations.end(), greater<int>());

    if (iSize == 0)
        return 0;

    for (int i = 0; i < iSize; i++)
    {
        if (citations[i] >= i + 1)
        {
            answer++;
        }
        else
            break;
    }

    return answer;

}