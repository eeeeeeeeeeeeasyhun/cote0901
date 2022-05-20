#include <iostream>
#include<vector>
#include<algorithm>
using namespace std;

vector<int> cnt;
vector<int> node[10001];
bool visit[10001] = { false, };

int dp[2][10001] = { 0, };


//dp
void dfs(int cul)
{
	if (visit[cul])
	{
		return;
	}

	visit[cul] = true;

	dp[0][cul] = 0;
	dp[1][cul] = cnt[cul];


	//
	for (int next : node[cul])
	{
		if (visit[next]) continue;
		dfs(next);

		dp[0][cul] += max(dp[0][next], dp[1][next]);
		dp[1][cul] += dp[0][next];
	}


}

//main
int main()
{
	ios::sync_with_stdio(false); 
	cin.tie(0); 
	cout.tie(0);
	
	int n;
	cin >> n;

	cnt.push_back(0);

	for (int i = 0; i < n; i++)
	{
		int input;
		
		cin >> input;
		cnt.push_back(input);
	}


	for (int i = 0; i < n; i++)
	{
		int a, b;
		cin >> a >> b;
		node[a].push_back(b);
		node[b].push_back(a);
	}

	dfs(1);
	cout << (max(dp[0][1], dp[1][1])) << "\n";

	return 0 ; 

}
