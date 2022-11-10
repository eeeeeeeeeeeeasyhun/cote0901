#include <iostream>
using namespace std;

int solution(int n)
{
    int ans = 1;



    //5-> 4 2 1-> 0 2°³
    //6 3 -> 2 1-> 0  2°³
    //5000 2500 1250 625 ->624 312 156 78 39 -> 38 19 -> 18  9 -> 8 4 2 1 -> 0 5°³

    while (n > 2)
    {
        if (n % 2 == 1)
        {
            n -= 1;
            ans++;
        }
        else
            n /= 2;
    }

    return ans;

}