#include<iostream>
using namespace std;

int fivo(int n)
{
	if (n == 0)
	{
		return 0;
	}
	if (n == 1)
	{
		return 1;
	}

	return fivo(n - 1) + fivo(n - 2); 

}

int main()
{
	int k;
	cin >> k;
	cout << fivo(k);
}