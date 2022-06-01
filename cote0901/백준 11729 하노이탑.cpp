#include<iostream>
using namespace std;

void Hfunc(int n, int start,int mid, int end) // 원반 개수, 시작지점 , 중간, 끝지점
{

	if (n == 1)
	{
		cout << start << " " << end << endl; //원반이 하나남았으면 원반을 시작점에서 끝지점으로 옮김
	}
	else
	{
		Hfunc(n - 1, start, end, mid); // 1번기둥 n-1개의 원반을 2번기둥 
		cout << start << " " << end << endl;  // 마지막 젤큰거 끝지점으로 옮5김
		Hfunc(n - 1, mid, start, end); // 2번기둥에서 3번기둥으로 옮김 
	}

}


int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int N;
	cin >> N;
	cout << (1 << N) - 1 << endl; //비트연산 2^n -1 
	Hfunc(N, 1, 2, 3);
	return 0;

}