#include <string>
#include <vector>
#include <algorithm>
#include<iostream>
using namespace std;

int solution(vector<int> numbers)
{
    int answer = 0;
    int k = 0;
    for (int j = 0; j < 10; j++)
    {
        int flag = 0;

        for (int i = 0; i < 10; i++)
        {
            if (numbers[i] == k)
                flag++;
        }
        if (flag == 0)
        {
            answer += k;
        }
        k++;
    }
    return answer;

}




int main()
{
    vector<int> nums;
    nums.push_back(1);
    nums.push_back(2);
    nums.push_back(4);
    nums.push_back(5);
    nums.push_back(6);
    cout << solution(nums);
}

//sort(numbers.begin(), numbers.end());
//int answer = 0;
//int k = 0;
//for (int i = 0; i < numbers.size(); i++)
//{
//
//    if (numbers[i] != k)
//    {
//        for (; k < numbers[i]; k++)
//        {
//            answer += k;
//        }
//    }
//    else
//        k++;
//
//}
//return answer;
