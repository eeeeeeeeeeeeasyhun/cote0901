#include<iostream>
#include<set>
#include<vector>
#include<string>
#include<algorithm>
#include<map>
using namespace std;


int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	map<int, int> m1;
	int N = 0, M = 0;
	int Num;
	cin >> N;
	vector<int> Result;
	vector<int> v1;
	//vector<int> v2(N);

	for (int i = 0; i < N; i++)
	{
		cin >> Num;

		if (m1.count(Num) == 0)
			m1.emplace(Num, 1);
		else
			m1[Num] ++;
	}

	//sort(v1.begin(), v1.end());


	

	cin >> M;
	for (int i = 0; i < M; i++)
	{
		cin >> Num;

		if (m1.count(Num) == 0)
			Result.push_back(0);
		else
			Result.push_back(m1[Num]);
		
	}

	for (int i = 0; i < M; i++)
	{
		cout << Result[i] << " ";
	}



}