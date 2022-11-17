#include<string>
#include<vector>

using namespace std;

vector<vector<int>> solution(vector<vector<int>> arr1, vector<vector<int>> arr2)
{
	vector<vector<int>> answer;
	int Row = arr1.size();
	int Col = arr1[0].size();
	int Row2 = arr2.size();
	int Col2 = arr2[0].size();

	for (int i = 0; i < Row; i++)
	{
		vector<int> v;
		for (int j = 0; j < Col2; j++)
		{
			int iSum = 0;
			for (int k = 0; k < Row2; k++)
			{
				iSum += arr1[i][k] * arr2[k][j];
			}
			v.push_back(iSum);
		}
		answer.push_back(v);
	}
	return answer;
}

