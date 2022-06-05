#include<iostream>
using namespace std;
#include<vector>


int N;
vector<int> vNum; //���ڴ��� ����
vector<int> vOper; //�����ڴ�������
int IMin = 1000000001;
int iMax = -1000000001;
void dfs(int iNum, int idx)
{
	if (idx == N)
	{
		if (iNum < IMin)
			IMin = iNum;

		if (iNum > iMax)
			iMax = iNum;

		return;
	}
	
	for (int i = 0; i < 4; i++)
	{
		if (vOper[i] > 0)
		{
			vOper[i]--; // ������ �ϳ� ��������Ƿ� 1�� �ٿ���
			if (i == 0)
				dfs(iNum + vNum[idx], idx + 1);
			else if (i == 1)
				dfs(iNum - vNum[idx], idx + 1);
			else if (i == 2)
				dfs(iNum * vNum[idx], idx + 1);
			else
				dfs(iNum / vNum[idx], idx + 1);
			vOper[i]++; // �ٸ� �����ڸ� ����� ���̹Ƿ� �Ʊ� �ٿ��� ������ ���� �÷���
		}

	}
	return;

}


int main()
{


	cin >> N;
	for (int i = 0; i < N; i++)
	{
		int tmp;
		cin >> tmp;
		vNum.push_back(tmp);
	}
	for (int i = 0; i < 4; i++)
	{
		int tmp;
		cin >> tmp;
		vOper.push_back(tmp);
	}


	dfs(vNum[0], 1);
	cout << iMax << '\n';
	cout << IMin;




}