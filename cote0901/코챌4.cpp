#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> a, vector<int> s) 
{
    vector<int> answer;
    vector<int> b;
    vector<int> c;


    for (int i = 0; i < b.size(); i++)
    {


        if (b[i] == b[i - 1])
        {
            b[i] += b[i - 1];
            b[i - 1] = 0;
            c.push_back(i);

        }

        for (int k = i - 1; k >0; k--) //다합치는거 
        {
            if (b[i] == b[i - k])
            {
                b[i] += b[i - k];
                b[i - k] = 0;
                c.push_back(i);
            }
        }
    }













    return answer;
}