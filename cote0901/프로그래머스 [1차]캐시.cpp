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
        if (find(s.begin(), s.end(), cities[i]) == s.end()) //������
        {
            if (size < cacheSize) //������� ������ 
            {
                s.push_back(cities[i]); //�ְ�
                size++; //������ø���
                answer += 5;//�� 5���ϱ�
            }

            else if (size == cacheSize) //������� ������
            {
                if (!s.empty())
                    s.erase(s.begin()); //�տ����ְ�
                s.push_back(cities[i]); //�־��ְ�
                answer += 5; //���ϱ�
            }
        }

        else if (find(s.begin(), s.end(), cities[i]) != s.end()) //������
        {
            s.erase(find(s.begin(), s.end(), cities[i]));  //ã���� ���ְ� �ڿ� �ֱ�
            s.push_back(cities[i]);
            answer++;
        }
    }
    return answer;
}