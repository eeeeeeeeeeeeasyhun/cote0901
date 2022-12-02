#include <iostream>
#include <vector>
using namespace std;

int solution(int n, vector<int> stations, int w)
{
    int answer = 0, start = 1, index = 0;

    while (start <= n)
    {
        if (start >= stations[index] - w && start <= stations[index] + w) //범위안
        {
            start = stations[index] + w; //다음범위로 바꾸고 인덱스 증가 
            index++;
        }
        else
        {
            start += 2 * w; //새로설치 해주고 정답더해줌
            answer++;
        }
        start++;
    }

    return answer;
}