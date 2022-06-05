#include<iostream>
using namespace std;

int N;
int iCnt;
int iCheckRaw[30]; //y üũ 
int iCheckRC[30];	 // x-y
int iCheckLC[30]; //x+y


void dfs(int cur)
{
	if (cur == N)
	{
		iCnt++;
		return;
	}

	else
	{
		for (int i = 0; i < N; i++)
		{
			if (iCheckRaw[i] || iCheckLC[i +cur] || iCheckRC[i - cur +N -1]) continue;
			iCheckRaw[i] = 1;
			iCheckLC[i +cur] = 1;
			iCheckRC[i -cur +N -1] = 1;
			dfs(cur + 1);
			iCheckRaw[i] = 0;
			iCheckLC[i + cur] = 0;
			iCheckRC[i - cur + N - 1] = 0;

		}



	}

}


int main()
{
	cin >> N;

	dfs(0);
		cout << iCnt;


}