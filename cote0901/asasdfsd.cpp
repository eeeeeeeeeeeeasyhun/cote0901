#include<iostream>
#include<string>


using namespace std;

/*
 * Complete the 'timeConversion' function below.
 *
 * The function is expected to return a STRING.
 * The function accepts STRING s as parameter.
 */

string timeConversion(string s)
{
    int iSize = s.size();

    if (s[iSize - 2] == 'A' && s[0] == '1' && s[1] == '2')
    {
        s[0] = '0';
        s[1] = '0';

    }

    else if (s[iSize - 2] == 'P' && s[0] != '1' ||  s[1] != '2')
    {
        s[0] += 1;
        s[1] += 2;u

    }
    return  s.substr(0, iSize - 2);
    
}

int main()
{

    string s;
    getline(cin, s);

    string result = timeConversion(s);

    cout << result << "\n";


    return 0;
}
