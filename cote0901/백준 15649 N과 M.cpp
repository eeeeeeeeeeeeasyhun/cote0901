#include<iostream>
using namespace std;

int N = 0, M = 0;
int iArr[10];
bool iCheck[10];


void dfs(int k)
{
	if (k == M) //  m의 수에 다다랐을떄
	{
		for (int i = 0; i < M; i++)
		{
			cout << iArr[i] << " ";
		}
		cout << endl;
	}
	else
	{
		for (int i = 1; i <= N; i++)
		{
			if (!iCheck[i])
			{
				iArr[k] = i;
				iCheck[i] = true;
				dfs(k + 1);
				iCheck[i] = false;
			}
		}
	}
}

int main()
{


	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	cin >> N >> M;
	dfs(0);

}