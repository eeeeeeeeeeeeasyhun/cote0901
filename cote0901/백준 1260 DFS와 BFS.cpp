#include <iostream>
#include <algorithm>
#include <cstring>
#include <vector>
#include <queue>
using namespace std;

int iArr[1001][1001];
int visit[1001];
int N, M, V, To, From;
queue<int> q;

void dfs(int iNum)
{
	cout << iNum << " ";
	visit[iNum] = true;

	for (int i = 1; i <= N; i++)
	{
		if (iArr[iNum][i] == 1 && visit[i] == false)
		{
			dfs(i);
		}
		if (i == N)
			return;
	}

}
void bfs(int iNum)
{
	q.push(iNum);

	while (!q.empty())
	{
		//int iNext = q.front();
		iNum = q.front();
					
		visit[iNum] = 1;
		cout << iNum << " ";
		q.pop();


		for (int i = 1; i <= N; i++)
		{
			if (iArr[iNum][i] == 1 && visit[i] == false)
			{
				q.push(i);
				visit[i] = true;
			}
		}
	}

}


int main()
{

	cin >> N >> M >> V;

	for (int i = 0; i < M; i++)
	{
		cin >> To >> From;
		iArr[To][From] = 1;
		iArr[From][To] = 1;
	}

	dfs(V);
	cout << endl;
	memset(visit, 0, sizeof(visit));
	bfs(V);
}