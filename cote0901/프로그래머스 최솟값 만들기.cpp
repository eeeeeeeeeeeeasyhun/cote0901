#include <iostream>
#include<vector>
#include<algorithm>
using namespace std;

int solution(vector<int> A, vector<int> B)
{
    int answer = 0;
    sort(A.begin(), A.end());
    sort(B.begin(), B.end());

    int iSize = A.size();

    for (int i = 0; i < A.size(); i++)
    {

        answer += A[i] * B[iSize - i - 1];
    }

    return answer;
}
