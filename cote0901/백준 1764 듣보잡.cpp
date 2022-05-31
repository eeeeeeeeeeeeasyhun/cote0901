#include<iostream>
using namespace std;
#include<map>
#include<string>
#include<algorithm>
#include<vector>
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	  
	int N = 0, M = 0;
	cin >> N >> M;

	map<string, int> m1;
	string s1;
	vector<string> v1;

	for (int i = 0; i < N; i++)
	{
		cin >> s1;
		m1.emplace(s1, 1);
	}

	for (int i = 0; i < M; i++)
	{
		cin >> s1;
		if (m1.count(s1))
		{
			v1.push_back(s1);
		}
	}

	sort(v1.begin(), v1.end());

	cout << v1.size() << endl;
	for (int i = 0; i < v1.size(); i++)
	{
		cout << v1[i] << endl;
	}

}

