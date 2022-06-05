#include<iostream>
using namespace std;
#include<vector>


int N;
int S;
int iCnt;
bool ICheck[21];
vector<int> iVec;

void dfs(int idx,int cnt, int sum)
{
	if (cnt>0 && sum ==S)
	{
		iCnt++;
	}

	if (idx == N)
		return;

	for (int i = idx +1; i <= N;  i++)
	{
		dfs(i, cnt + 1, sum + iVec[i]);
	}

}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	cin >> N >> S;

	for (int i = 0; i < N; i++)
	{
		int iTmp;
		cin >> iTmp;
		iVec.push_back(iTmp);
	}

	dfs(0,0,0);

	cout << iCnt << endl;

	return 0;
}

