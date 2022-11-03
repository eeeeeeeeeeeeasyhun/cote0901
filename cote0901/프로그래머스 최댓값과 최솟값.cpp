#include <string>
#include <vector>
#include<iostream>
#include<algorithm>
using namespace std;

string solution(string s) {
    int iMax = 0;
    int iMin = 0;
    bool flag = false;


    string sTmp;
    vector<int> v1;
	for (int i = 0; i < s.length(); i++)
	{
		if (s[i] == ' ') {
			v1.push_back(stoi(sTmp));
			sTmp.clear();
		}
		else
		{
			sTmp += s[i];
		}
	}

		v1.push_back(stoi(sTmp));

		sort(v1.begin(), v1.end());

		return to_string(v1.front()) + " " + to_string(v1.back());
}

void main()
{
	string a;
	getline(cin, a);
	cout << solution(a) << endl;

}

