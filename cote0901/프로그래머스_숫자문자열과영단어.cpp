#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string>
#include <vector>
#include<iostream>
#include <cctype>
using namespace std;
#include<algorithm>
// �Ķ���ͷ� �־����� ���ڿ��� const�� �־����ϴ�. �����Ϸ��� ���ڿ��� �����ؼ� ����ϼ���.
int solution(const char* s)
{   
    string str;
    str = s;
    string ansstr;
    for (int i = 0; i < str.length(); i++)
    {
        if (isdigit(str[i]))
        {
            ansstr += str[i];
        }

        else
        {
            if (str[i] == 'z' && str[i + 1] == 'e')
            {
                ansstr += '0';
                i++;
                i++;
            }
            else if (str[i] == 'o' && str[i + 1] == 'n')
            {
                ansstr += '1';
                i++;
                i++;
            }
            else if (str[i] == 't' && str[i + 1] == 'w')
            {
                ansstr += '2';
                i++;
                i++;
            }
            else if (str[i] == 't' && str[i + 1] == 'h')
            {
                ansstr += '3';
                i++;
                i++;
                i++;
                i++;
            }
            else if (str[i] == 'f' && str[i + 1] == 'o')
            {
                ansstr += '4';
                i++;
                i++;
                i++;
            }
            else if (str[i] == 'f' && str[i + 1] == 'i')
            {
                ansstr += '5';
                i++;
                i++;
                i++;
            }
            else if (str[i] == 's' && str[i + 1] == 'i')
            {
                ansstr += '6';
                i++;
                i++;
            }
            else if (str[i] == 's' && str[i + 1] == 'e')
            {
                ansstr += '7';
                i++;
                i++;
                i++;
                i++;
            }
            else if (str[i] == 'e' && str[i + 1] == 'i')
            {
                ansstr += '8';
                i++;
                i++;
                i++;
                i++;
            }
            else if (str[i] == 'n' && str[i + 1] == 'i')
            {
                ansstr += '9';
                i++;
                i++;
                i++;
            }
        }


    }
    int answer = 0;

    answer = stoi(ansstr);
    return answer;
}


void main()
{
   cout << solution("one4seveneight");
}