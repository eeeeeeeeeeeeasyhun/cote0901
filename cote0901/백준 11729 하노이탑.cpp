#include<iostream>
using namespace std;

void Hfunc(int n, int start,int mid, int end) // ���� ����, �������� , �߰�, ������
{

	if (n == 1)
	{
		cout << start << " " << end << endl; //������ �ϳ��������� ������ ���������� ���������� �ű�
	}
	else
	{
		Hfunc(n - 1, start, end, mid); // 1����� n-1���� ������ 2����� 
		cout << start << " " << end << endl;  // ������ ��ū�� ���������� ��5��
		Hfunc(n - 1, mid, start, end); // 2����տ��� 3��������� �ű� 
	}

}


int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int N;
	cin >> N;
	cout << (1 << N) - 1 << endl; //��Ʈ���� 2^n -1 
	Hfunc(N, 1, 2, 3);
	return 0;

}