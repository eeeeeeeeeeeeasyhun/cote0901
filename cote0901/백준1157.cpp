#include<iostream>
using namespace std;
#include<string>
#include<unordered_map>
int main()
{
    string str;
    cin >> str;
    vector<int> v1(26, 0);
    int max = 0;
    char ans;
    for (int i = 0; i < str.length(); i++)
    {
        if ((int)str[i] > 'Z')
        {
            str[i] = char((int)str[i] - 'a' + 'A');
        }
    }
   
    for (int i = 0; i < str.length(); i++)
    {
            v1[str[i]- 'A']++;
    }
  
  

    for (int i = 0; i < v1.size(); i++)
    {
        if (v1[i] > max)
        {
            max = v1[i];
            ans = i + 'A';
        }
    }

    int tmpCount = 0;
    for (int i = 0; i < v1.size(); i++)
    {
        if (v1[i] == max)
            tmpCount++;
    }
    
    if (tmpCount > 1)
    {
        cout << "?";
    }
    else
    cout << ans;

    return 0;
}