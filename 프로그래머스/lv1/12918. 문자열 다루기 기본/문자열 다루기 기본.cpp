#include <string>
#include <vector>

using namespace std;

bool solution(string s) 
{   
    bool answer = true;
    
    for(int i=0; i<s.length(); i++)
    {
        if(s.lenght() == 4 || s.lenght() == 6)
        {
            if(isdigit(s[i] )
               {
            answer = true;
               }
               else
               answer= false;
        }
        else
            answer =false;
    }
    return answer;
}