#include<iostream>
using namespace std;
#define Max 9
int N, M;
int arr[Max];
bool visited[Max];

void dfs(int num, int k)
{
	if (k == M)
	{
		for (int i = 0; i < M; i++)
		{
			cout << arr[i] << " ";
		}
		cout << endl;
	}

	else
	{
		for (int i = num; i < N; i++)
		{
			if (!visited[i])
			{
				visited[i] = true;
				arr[k] = i;
				dfs(i+1, k + 1);
				visited[i] = false;

			}
		}

	}
}


int main()
{
	cin >> N >> M;
	dfs(0);

}