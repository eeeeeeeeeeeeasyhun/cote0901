#include<iostream>
using namespace std;
#include <vector>
#include<algorithm>
#include<string>

int strokesRequired(vector<string> picture) {

    const long lSize = picture.size();
    const long lStrSize = picture[0].length();
    long lDp[lSize][lStrSize];
    int iResult = 1;
    lDp[0][0] = iResult;
    for (int i = 1; i < lStrSize; i++)
    {
        if (picture[0][i] == picture[0][i - 1])
            lDp[0][i] = lDp[0][i - 1];

        else {
            iResult += 1;
            lDp[0][i] = iResult;
        }

    }



    for (int i = 1; i < lSize; i++)
    {
        if (picture[i][0] == picture[i - 1][0])
        {
            lDp[i][0] = lDp[i - 1][0];
        }

        else
        {
            iResult += 1;
            lDp[i][0] = iResult;
        }

        for (int j = 1; j < lStrSize; j++)
        {
            if (picture[i][j] == picture[i][j - 1])
            {
                lDp[i][j] = lDp[i][j - 1];
            }
            else if (picture[i][j] == picture[i - 1][j])
            {
                lDp[i][j] = lDp[i - 1][j];
            }
            else
            {
                iResult += 1;
                lDp[i][j] = iResult;
            }
        }
    }
    return iResult;
}

void main()
{
    vector<int> arr;
    arr.push_back(3);
    arr.push_back(3);
    arr.push_back(3);

    vector<int> v1;
    v1 = arr;
    sort(v1.begin(), v1.end());

    cout << v1.size();
}

