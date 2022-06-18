#include<iostream>
using namespace std;


int House[1001][3];
int N;



int main()
{
	cin >> N;
	int cost[3];   
	House[0][0] = 0;
	House[0][1] = 0;
	House[0][2] = 0;
	     

	for (int i = 1; i <=N; i++)
	{
		cin >> cost[0] >> cost[1] >> cost[2];
		House[i][0] = min(House[i-1][1], House[i-1][2]) + cost[0]; //마지막이 0(R) 일때 그전 까지의 최솟값에 R값더함
		House[i][1] = min(House[i-1][0], House[i-1][2]) + cost[1]; //마지막이  1(G) 일때 그전 까지의 최솟값에 G값더함
		House[i][2] = min(House[i-1][1], House[i-1][0]) + cost[2];


	}
	cout << min(House[N][2], min(House[N][0], House[N][1]));


}