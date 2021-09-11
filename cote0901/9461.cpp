#include<iostream>
using namespace std;
#include <vector>

long long v1[101] = { 0,1,1, 2,2};
int N = 0;
int tri(int n)
{
	if (n < 5)
	{
		return v1[n];
	}

	else
		v1[n] = tri(n - 1) + tri(n - 5);

	return v1[n];

}




int main()
{
	int T, N;
	cin >> T;
	for (int i = 0; i < T; i++)
	{
		cin >> N;
		cout << tri(N) << endl;
	}


}