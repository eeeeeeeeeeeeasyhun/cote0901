#include <iostream>
#include<vector>
#include<algorithm>
using namespace std;

int solution(vector<int> A, vector<int> B)
{
    int answer = 0;

    vector<int> vTmp, vTmp2;

    sort(A.front(), A.back());
    sort(B.front(), B.back());

    int iSize = A.size();

    for (int i = 0; i < A.size(); i++)
    {

        answer += A[i] * B[iSize - i];
    }
    return answer;

}

void main()
{
    vector<int> a, b;

    


}