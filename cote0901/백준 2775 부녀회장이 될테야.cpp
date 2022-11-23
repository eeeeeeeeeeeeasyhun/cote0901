#include<iostream>
using namespace std;


int Num(int K, int N)
{
	if (N == 1)
		return 1;
	if (K == 0)
		return N;

	return Num(K - 1, N) + Num(K, N - 1);
}

int main()
{
	int T, K, N;
	cin >> T;
	for (int i = 0; i < T; i++)
	{
		cin >> K >> N;
		cout << Num(K, N) << endl;

	}

}