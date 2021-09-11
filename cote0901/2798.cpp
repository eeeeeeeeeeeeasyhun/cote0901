#include<iostream>
using namespace std;
#include<vector>
#include<algorithm>
int main()
{
	int iNum, iMax;
	vector<int> v1;

	cin >> iNum >> iMax;
	for (int i = 0; i < iNum; i++)
	{
		int iTmp;
		cin >> iTmp;
		v1.push_back(iTmp);
	}
	

	sort(v1.begin(), v1.end());
	int iResult = 0;
	
	for (int i = 0; i < iNum -2; i++)
	{
		for (int j = i + 1; j < iNum - 1; i++)
		{
			for (int k = j + 1; k < iNum; k++)
			{

				if (v1[i] + v1[j] + v1[k] <= iMax && v1[i] + v1[j] + v1[k] > iResult)
					iResult = v1[i] + v1[j] + v1[k];

				if (v1[i] + v1[j] + v1[k] > iMax)
				{
					cout << iResult;
					return 0;
				}
					
			}
		}
	}

	cout << iResult;
	return 0;


}
