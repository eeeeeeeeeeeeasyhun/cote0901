#include<iostream>
using namespace std;
#include <string>
#include<vector>
int main()
{
    cout << "입력하세요" << endl;
    int case1 = 0;
    cin >> case1;

    vector<vector<char>>input;
   
    for (int i = 0; i < case1; i++)
    {
        char tmp[40];
        cin >> tmp;
        for (int j = 0; j < strlen(tmp); j++)
        {
            input[i].push_back(tmp[j]);
        }
    }



    for (int j = 0; j < case1; j++)
    {
        int num = input[j][0] - '0';
        vector<char> chararr;
        for (int i = 0; input[j].size() - 2; i++)
        {
            for (int k = 0; k < num; k++)
            {
                if (input[j][k + 2] != ' ')
                    chararr.push_back(input[j][k + 2]);
            }
        }
        for (int k = 0; k < chararr.size(); k++)
        {
            cout << chararr[k];
        }
    }
    return 0;
}