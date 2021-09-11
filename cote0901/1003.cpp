#include<iostream>
using namespace std;
#include<vector>

int k, m;

int fibo(int n)
{
	if (n == 0)
	{
		k++;
		return 0;
	}
	if (n == 1)
	{
		m++;
		return 1;
	}
	else
	{
		return fibo(n - 1) + fibo(n - 2);
	}

}

int main()
{
	int N, T;
	cin >> N;
	vector < int> v1;
	for (int i = 0; i < N; i++)
	{
		cin >> T;
		v1.push_back(T);
	}
	for (int i = 0; i < v1.size(); i++)
	{
		k = 0, m = 0;
		fibo(v1[i]);
		cout << k << " " << m << endl;
	}
	return 0;
}