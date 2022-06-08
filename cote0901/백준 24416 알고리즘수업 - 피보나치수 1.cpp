	#include<iostream>
	using namespace std;

	int fib[41];


	int main()
	{
		fib[1] = fib[2] = 1;
		int N;
		cin >> N;
		for (int i = 3; i < 41; i++)
		{
			fib[i] = fib[i - 1] + fib[i - 2];
		}

		cout << fib[N] << " " << N - 2;

	}