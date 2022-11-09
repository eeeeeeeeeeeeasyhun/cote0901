#include <string>
#include <vector>
#include <iostream>
#include<map>
using namespace std;

vector<int> solution(int n, vector<string> words)
{
    vector<int> answer;


    int iCount = 1; //���°������
    int iPerson = 1; //���°�������

    map<string, int> check;

    check[words[0]]++;
    int iSize = words[0].length();

    for (int i = 1; i < words.size(); i++)
    {
        iPerson++;
        if (iPerson > n)
        {
            iPerson = 1;
            iCount++;
        }

        if (check[words[i]]) //�̴̹ܾ ������
        {
            answer.push_back(iPerson);
            answer.push_back(iCount);
            break;
        }

        if (words[i][0] != words[i - 1][iSize - 1]) //���ܾ�� ù�ܾ� �ٸ���
        {
            answer.push_back(iPerson);
            answer.push_back(iCount);
            break;
        }
        check[words[i]]++;
        iSize = words[i].length();

        if (i == words.size() - 1)
        {
            answer.push_back(0);
            answer.push_back(0);
        }
    }


    return answer;
}