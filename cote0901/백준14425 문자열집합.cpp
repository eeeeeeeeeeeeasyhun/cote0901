#include<iostream>
#include<string>
#include<vector>
#include<set>
using namespace std;


int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	int n = 0, m = 0;
	int cnt = 0;
	cin >> n;
	cin >> m;

	set<string> s1;
	for (int i = 0; i < n; i++)
	{
		string tmpstr;
		cin >> tmpstr;

		s1.insert(tmpstr);

	}


	for (int i = 0; i < m; i++)
	{
		string tmpstr;
		cin >> tmpstr;
		if (s1.find(tmpstr) != s1.end())
		{
			cnt++;
		}


	}
	cout << cnt;

}