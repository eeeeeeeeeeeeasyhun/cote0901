#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int solution(int cacheSize, vector<string> cities)
{
    if (cacheSize == 0)
        return cities.size() * 5;

    vector<string> s;
    int size = s.size();
    int answer = 0;

    for (int i = 0; i < cities.size(); i++)
    {
        transform(cities[i].begin(), cities[i].end(), cities[i].begin(), ::tolower);
    }

    for (int i = 0; i < cities.size(); i++)
    {
        if (find(s.begin(), s.end(), cities[i]) == s.end()) //없으면
        {
            if (size < cacheSize) //사이즈보다 작으면 
            {
                s.push_back(cities[i]); //넣고
                size++; //사이즈늘리고
                answer += 5;//답 5더하기
            }

            else if (size == cacheSize) //사이즈랑 같으면
            {
                if (!s.empty())
                    s.erase(s.begin()); //앞에없애고
                s.push_back(cities[i]); //넣어주고
                answer += 5; //더하기
            }
        }

        else if (find(s.begin(), s.end(), cities[i]) != s.end()) //있으면
        {
            s.erase(find(s.begin(), s.end(), cities[i]));  //찾은거 없애고 뒤에 넣기
            s.push_back(cities[i]);
            answer++;
        }
    }
    return answer;
}