#include<iostream>
using namespace std;
#include<vector>
#include<algorithm>

int main()
{

	int iTestCase;
	cin >> iTestCase;
	while (iTestCase--)
	{
		int M;
		vector<int> iArr; //ผýภฺ บคลอ 
		vector<int> iAns;
		vector<int> SortV;
		cin >> M;
		for (int i = 0; i < M; i++)
		{
			int N;
			cin >> N;
			iArr.push_back(N);



			if (i == 0)
				iAns.push_back(iArr[i]);

			else if (i % 2 == 0)
			{
				sort(iArr.begin(), iArr.end());
				iAns.push_back(iArr[i / 2]);
			}
		}

		cout << (M + 1) / 2 << '\n';
		for (int i = 0; i < iAns.size(); i++)
		{
			cout << iAns[i] << " ";
		}
		cout << '\n';
	}

}
