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

	//�ڿ��� A�� B�� ���� ���� �˰� �ʹ�.�� ���Ϸ��� ���� �ſ� Ŀ�� �� �����Ƿ� �̸� C�� ���� �������� ���ϴ� ���α׷��� �ۼ��Ͻÿ�.
}


