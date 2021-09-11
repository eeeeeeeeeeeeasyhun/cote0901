//자연수 N과 M이 주어졌을 때, 아래 조건을 만족하는 길이가 M인 수열을 모두 구하는 프로그램을 작성하시오.
//
//1부터 N까지 자연수 중에서 M개를 고른 수열
//같은 수를 여러 번 골라도 된다.\


#include<iostream>
using namespace std;

int N, M;
int iArr[8]{ 0 };


void dfs(int n)
{
	if (n == M) //끝까지 도달
	{
		for (int i = 0; i < M; i++)
		{
			cout << iArr[i] << ' ';
		}
		cout << endl;
		return;
	}


		for (int i = 1; i <= N; i++)
		{
			iArr[n] = i;
			dfs(n + 1);
		}



}


int main()
{
	cin >> N >> M;
	dfs(0);
	
	return 0;
}