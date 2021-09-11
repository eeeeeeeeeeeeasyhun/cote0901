#include <iostream>
#include <string.h>
#include<vector>
using namespace std;

int main()
{
    vector<int> alpha(27, -1);
    int num = 0;
    string word;

    cin >> word;

    for (int i = 0; i < word.length(); i++)
    {
        if (alpha[int(word[i]) - 'a'] == -1)
        {
            alpha[int(word[i]) - 'a'] = num;
            num++;
        }
    }

    for (int i = 0; i < 26; i++)
    {
        cout << alpha[i] << " ";
    }

    return 0;
}