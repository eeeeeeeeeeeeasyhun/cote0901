#include<iostream>
using namespace std;

long long a, b, c;


long long  func(long long  a, long long b, long long c) 
{
	if (b == 0)
		return  1;	
	if (b == 1)
		return a % c;


	long long val = func(a, b/2, c);

	val = val * val % c;

	if (b % c == 0)
	{
		return val;
	}
	return val * a % c;
	
}



int main()
{

	cin >> a >> b >> c;
	cout << func(a, b, c);

	//자연수 A를 B번 곱한 수를 알고 싶다.단 구하려는 수가 매우 커질 수 있으므로 이를 C로 나눈 나머지를 구하는 프로그램을 작성하시오.
}


