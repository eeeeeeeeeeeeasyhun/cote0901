#include<iostream>
using namespace std;

int N = 0, M = 0;
int iArr[9];
bool bVisit[9];
void dfs(int k, int cur)
{
	if (k == M) //�����ºκ�
	{
		{
			for (int i = 0; i < M; i++)
			{
				cout << iArr[i] << " ";
			}
			cout << "\n";
		}

	}
	else
	{
		for (int i = 1; i <= N; i++)
		{
			if (cur > i) continue; //���纸�� ������ ���� �ʿ����
			if (!bVisit[i])
			{
				bVisit[i] = true;
				iArr[k] = i;
				dfs(k + 1, i);
				bVisit[i] = false;
			}
		}

	}
}

int main()
{
	cin >> N >> M;
	dfs(0, 1);
}