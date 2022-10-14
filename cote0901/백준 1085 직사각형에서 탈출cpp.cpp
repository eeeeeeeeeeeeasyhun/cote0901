#include<iostream>
using namespace std;
#include<algorithm>
int main()
{
	int iX, iY, iW, iH;

	cin >> iX >> iY >> iW >> iH;

	int iReasult1, iReasult2;

	iReasult1 = min(iW - iX, iH - iY);
	iReasult2 = min(iX, iY);

	cout << min(iReasult1, iReasult2);



}