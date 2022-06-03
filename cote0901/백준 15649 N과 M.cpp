#include<iostream>
using namespace std;

int N, M;
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
		cout << "\n";
	}
	else
	{
		for (int i = 1; i <= N; i++)
		{
			if (!iCheck[i])
			{
				iCheck[i] = true;
				iArr[k] = i;
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