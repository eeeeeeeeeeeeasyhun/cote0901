#include <string>
#include <vector>
#include <cmath>

using namespace std;

vector<int> solution(int brown, int yellow)
{
    vector<int> answer;

    int iSize = brown + yellow;

    for (int i = 3; i <= sqrt(iSize); i++)
    {
        if (iSize % i == 0)
        {
            int width = iSize / i;

            if (((width + i) * 2 - 4) == brown)
            {
                answer.push_back(width);
                answer.push_back(i);
                break;
            }
        }
    }


    return answer;

}