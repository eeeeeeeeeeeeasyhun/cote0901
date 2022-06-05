#include<iostream>
using namespace std;
#include<vector>


int N;
vector<int> vNum; //숫자담을 벡터
vector<int> vOper; //연산자담을거임
int IMin = 1000000001;
int iMax = -1000000001;
void dfs(int iNum, int idx)
{
	if (idx == N)
	{
		if (iNum < IMin)
			IMin = iNum;

		if (iNum > iMax)
			iMax = iNum;

		return;
	}
	
	for (int i = 0; i < 4; i++)
	{
		if (vOper[i] > 0)
		{
			vOper[i]--; // 연산자 하나 사용했으므로 1개 줄여줌
			if (i == 0)
				dfs(iNum + vNum[idx], idx + 1);
			else if (i == 1)
				dfs(iNum - vNum[idx], idx + 1);
			else if (i == 2)
				dfs(iNum * vNum[idx], idx + 1);
			else
				dfs(iNum / vNum[idx], idx + 1);
			vOper[i]++; // 다른 연산자를 사용할 것이므로 아까 줄였던 연산자 개수 늘려줌
		}

	}
	return;

}


int main()
{


	cin >> N;
	for (int i = 0; i < N; i++)
	{
		int tmp;
		cin >> tmp;
		vNum.push_back(tmp);
	}
	for (int i = 0; i < 4; i++)
	{
		int tmp;
		cin >> tmp;
		vOper.push_back(tmp);
	}


	dfs(vNum[0], 1);
	cout << iMax << '\n';
	cout << IMin;




}