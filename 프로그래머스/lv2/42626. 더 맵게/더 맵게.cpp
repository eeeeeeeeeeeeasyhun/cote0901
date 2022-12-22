#include <string>
#include <vector>
#include <queue>
#include<algorithm>
#include <iostream>
using namespace std;

int solution(vector<int> scoville, int K)
{
    int answer = 0;
    priority_queue<int, vector<int>, greater<int> > tempq;
    
    for (int i = 0; i < scoville.size(); i++)
    {
        tempq.emplace(scoville[i]);
    }


    for (int i = 0; i < scoville.size()-1; i++)
    {
        if (tempq.size() < 1)
            return answer;
        if (tempq.top() < K)
        {
            int t = tempq.top();
            tempq.pop();
            int t2 = tempq.top();
            tempq.pop();
            
            tempq.push(t + t2 *2);
            answer++;
        }

        else
        {
            return answer;
        }
    }

    if (tempq.top() < K)
        return -1;

    return answer;
}

