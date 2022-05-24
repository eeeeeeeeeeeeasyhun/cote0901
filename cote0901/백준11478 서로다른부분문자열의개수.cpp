#include<iostream>
#include<map>
#include<string>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	map<string, int> m1;
	string s1;
	cin >> s1;
	
	int iSize = s1.length();
	
	for (int i = 0; i < iSize; i++)
	{
		for (int j = 1; j < iSize-i+1; j++)
			m1.emplace(s1.substr(i,j), 1);
	}
	cout << m1.size();


}
