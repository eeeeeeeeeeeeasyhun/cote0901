#include<iostream>
using namespace std;
#include<string>


int main()
{
	string s1;
	getline(cin, s1);
	int ans=0;

	for (int i = 0; i < s1.length()-1; i++)
	{
		if (s1[i] == ' ' && s1[i + 1] != ' ')
			ans++;

	
	}
	if (s1[0] == ' ')
		ans -= 1;
	cout << ans + 1;

}