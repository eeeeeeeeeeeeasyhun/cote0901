#include<iostream>
using namespace std;
#include<cmath>


int FuncZ(int n, int r, int c)
{
	if (n ==0)
		return 0;
	
	int half = (1 << (n - 1));
	if (r < half && c < half)  //1��и� 
		return FuncZ(n - 1, r, c);



		if (r < half && c >= half) // 2�� �簢�� 
		return  half * half + FuncZ(n - 1, r, c - half);

		if (r >= half && c < half)   //3�� �簢��
		return   2* half * half + FuncZ(n - 1, r - half, c);


		return   3 * half * half + FuncZ(n - 1, r- half, c- half); //4��и�
	

}	


int main()
{
	int n, r, c;
	cin >> n >> r >> c;
	cout << FuncZ(n, r, c);

}