#include<iostream>
using namespace std;

int N, M;
int iArr[9]{};


void dfs(int num, int n)
{
	if (n == M)
	{
		for (int i = 0; i < M; i++)
		{
			cout << iArr[i] << " ";
		}
		cout << endl;
		return;

	}

	
	else
	{
		for (int i = num; i <= N; i++)
		{

			iArr[n] = i;
			dfs(i,n + 1);

		}

	}
	

}

int main()
{
	
	cin >> N >> M;

	dfs(1, 0);
	return 0;
}