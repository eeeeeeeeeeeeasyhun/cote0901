#include<iostream>
#include<map>
#include<vector>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);


	map<int, int> A1;
	map<int, int> B1;

	int N = 0, M = 0;
	int Num = 0;
	cin >> N >> M;
	vector<int> v1;
	vector<int> v2;
	int Result = 0;

	for (int i = 0; i < N; i++)
	{
		cin >> Num;
		v1.push_back(Num);
		A1.emplace(Num, 1);
	}
	for (int i = 0; i < M; i++)
	{
		cin >> Num;
		v2.push_back(Num);
		B1.emplace(Num, 1);
	}
	 
	for (int i = 0; i < N; i++)
	{
		if (B1.count(v1[i]) == 0)
		{
			Result++;
		}
	}

	for (int i = 0; i < M; i++)
	{
		if (A1.count(v2[i]) == 0)
		{
			Result++;
		}
	}
	
	cout << Result;
}

