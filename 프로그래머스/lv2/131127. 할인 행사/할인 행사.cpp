#include <string>
#include <vector>
#include <map>
using namespace std;

int solution(vector<string> want, vector<int> number, vector<string> discount)
{
    int answer = 0;

    map<string, int> mWant;
    
    for(int i=0; i<number.size(); i++)
    {
        mWant.insert({want[i], number[i]});
    }   
    
    for (int i = 0; i < discount.size() - 9; i++) 
    {
        map<string, int> mDiscount;
        
        for (int j = 0; j < 10; j++) 
        {
            mDiscount[discount[j + i]]++;
        }
        if(mDiscount == mWant)
            answer++;
    }

    return answer;
}