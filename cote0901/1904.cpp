#include<iostream>
using namespace std;
#include<vector>
vector<int> answer = { 0, 1, 2 };
int N;
void tile()
{
	long long tmp;
	for (int i = 3; i <= N; i++)
	{
		tmp = 0;
		tmp = answer[i - 1] + answer[i - 2];
		answer.push_back(tmp % 15746);
	}
}


int main()
{
	cin >> N;
	tile();
	cout << answer[N]% 15746;
}