#include<iostream>
#include<vector>
#include<string>
#include<map>
#include<algorithm>
using namespace std;

bool cmp(const pair<string, int>& a, const pair<string, int>& b) 
{
	return a.second > b.second;
}
vector<string> solution(vector<string> movie)
{

	map<string, int> m1;

	for (int i = 0; i < movie.size(); i++)
	{

		if (m1.count(movie[i]))  //없으면 0 있으면 1
		{
			m1[movie[i]]++;
		}
		else
		m1.insert(make_pair(movie[i], 1));

	}
	
	vector<pair<string, int>> vec(m1.begin(), m1.end());
	vector<string> ans;

	sort(vec.begin(), vec.end(), cmp);


	for (auto const& pair : vec)
	{
		cout << pair.first << " " << pair.second << endl;
	}


	for (auto const& pair : vec)
	{
		ans.push_back(pair.first);
	}

	return ans;
}


int main()
{
	vector<string> v2;
	v2.push_back("spy");
	v2.push_back("ray");
	v2.push_back("spy");
	v2.push_back("room");
	v2.push_back("once");
	v2.push_back("ray");
	v2.push_back("spy");  
	v2.push_back("once");


	//spy 3 ray 2 room 1 once 2

	vector<string> ans2 = solution(v2);

	for (int i = 0; i < ans2.size(); i++)
	{
		cout << ans2[i] << endl;
	}





	
	



}
