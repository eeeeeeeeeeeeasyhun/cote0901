#include <string>
#include <vector>
#include<iostream>
using namespace std;
#include<algorithm>

string solution(string new_id)
{
    string :: iterator it;
    for (it = new_id.begin(); it < new_id.end(); it++)
    {
        if (*it >= 'A' && *it <= 'Z')
        {
            *it -= 'A';
            *it += 'a';
        }
    }

    for (it = new_id.begin(); it < new_id.end();)
    {
        if (((*it>= 'a' && *it<= 'z') || (*it>= '0' && *it<= '9') || (*it == '-') || (*it == '_') || (*it == '.')))
        {
            it++;
        }
        else
        {
            it = new_id.erase(it);
        }
    }

    for (it = new_id.begin(); it < new_id.end()-1;)
    {
        if (*it == '.' && *(it + 1) == '.')
        {
            it = new_id.erase(it);
        }
        else
            it++;
    }

        
    if (new_id.front() == '.') new_id.erase(new_id.begin());
    if (new_id.back() == '.') new_id.erase(new_id.end() - 1);

    if (new_id.begin() == new_id.end())
    {
        new_id.push_back('a');
    }

    if (new_id.length() >= 16)
    {
        new_id = new_id.substr(0, 15);
    }

    if (new_id.back() == '.') new_id.erase(new_id.end() - 1);

    if (new_id.length() <= 2)
    {
        for (int i = 0; new_id.length() < 3; i++)
        {
            new_id += (new_id.back());
        }
    }
        


    //for (int i = 0; i < new_id.length(); i++)
    //{
    //    if (new_id[i] >= 'A' && new_id[i] <= 'Z')
    //    {
    //        new_id[i] -= 'A';
    //        new_id[i] += 'a';
    //    }
    //    
    //}

    string answer = "";
    answer = new_id;


    return answer;
}

void main()
{
    string str; 
    str = "qw34fsadf123";

    solution(str);
}