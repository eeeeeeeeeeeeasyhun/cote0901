#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
#include<map>
using namespace std;



int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);


	int n = 0, m = 0;

	vector<string> name;
	map<string, int> m1;

	vector<string> ans;
	vector<string> tmp; // 입력받을예정


	cin >> n >> m;

	for (int i = 1; i <= n; i++)
	{
		string s1;
		cin >> s1;

		name.push_back(s1);
		m1.insert(make_pair(s1, i));

	}

	for (int i = 0; i < m; i++)
	{
		string s2;
		cin >> s2;

		if (s2[0] >= 65 && s2[0] <= 90) //앞글자 대문자이면 
		{
			ans.push_back(to_string(m1[s2]));
		}

		else
		{
			ans.push_back(name[stoi(s2) - 1]);
		}
	}
	for (int i = 0; i < ans.size(); i++) {
		cout << ans[i] << '\n'; // 출력
	}
	return 0;
}