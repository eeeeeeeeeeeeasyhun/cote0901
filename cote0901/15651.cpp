//�ڿ��� N�� M�� �־����� ��, �Ʒ� ������ �����ϴ� ���̰� M�� ������ ��� ���ϴ� ���α׷��� �ۼ��Ͻÿ�.
//
//1���� N���� �ڿ��� �߿��� M���� �� ����
//���� ���� ���� �� ��� �ȴ�.\


#include<iostream>
using namespace std;

int N, M;
int iArr[8]{ 0 };


void dfs(int n)
{
	if (n == M) //������ ����
	{
		for (int i = 0; i < M; i++)
		{
			cout << iArr[i] << ' ';
		}
		cout << endl;
		return;
	}


		for (int i = 1; i <= N; i++)
		{
			iArr[n] = i;
			dfs(n + 1);
		}



}


int main()
{
	cin >> N >> M;
	dfs(0);
	
	return 0;
}