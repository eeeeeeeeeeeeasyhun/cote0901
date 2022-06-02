#include<iostream>
using namespace std;
#include<cmath>


int FuncZ(int n, int r, int c)
{
	if (n ==0)
		return 0;
	
	int half = (1 << (n - 1));
	if (r < half && c < half)  //1사분면 
		return FuncZ(n - 1, r, c);



		if (r < half && c >= half) // 2번 사각형 
		return  half * half + FuncZ(n - 1, r, c - half);

		if (r >= half && c < half)   //3번 사각형
		return   2* half * half + FuncZ(n - 1, r - half, c);


		return   3 * half * half + FuncZ(n - 1, r- half, c- half); //4사분면
	

}	


int main()
{
	int n, r, c;
	cin >> n >> r >> c;
	cout << FuncZ(n, r, c);

}