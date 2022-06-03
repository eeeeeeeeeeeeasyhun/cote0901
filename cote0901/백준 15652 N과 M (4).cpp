#include<iostream>
using namespace std;

int N, M;
int iArr[9];

void dfs(int k, int cur)
{
	if (k == M)
	{
		for (int i = 0; i < M; i++)
		{
			//Ãâ·Â;
			cout << iArr[i] << " ";
		}
		cout << '\n';
	}


	else
	{
		for (int i = cur; i <= N; i++)
		{
			iArr[k] = i;	
			dfs(k+1, i);
		}


	}



}


int main()
{

	cin >> N >> M;

	dfs(0, 1);

}