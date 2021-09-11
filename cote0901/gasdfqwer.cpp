#include<iostream>
using namespace std;
#include<string>

int superDigit(string n, int k)
{
    string test = n;
    long sum = 0;

    if (test.length() == 1)
    {
        return test[0] - '0';
    }

    else
    {
        for (int i = 0; i < test.length(); i++)
        {
            sum += test[i] - '0';
        }
        sum = sum * k;

        return superDigit(to_string(sum), 1);
    }
}



void main()
{
    int k;
    string n;
    cin >> n;
    cin >> k;

 

    cout << superDigit(n, k);
}
