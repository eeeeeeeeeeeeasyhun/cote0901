#include<iostream>
using namespace std;


int N, M;
int arr[9];
bool visit[9];

void dfs(int k)
{
	if (k == M) //M까지 도달
	{

		for (int i = 0; i < M; i++)
		{
			cout << arr[i] << " ";
		}
		cout << "\n";

	}
	else
	{
		for (int i = 1; i <= N; i++)
		{
			if (!visit[i])
			{
				visit[i] = true;
				arr[k] = i;
				dfs(k + 1);
				visit[i] = false;
			}
		}
	}

}

int main()
{

	cin >> N >> M;
	dfs(0);


}