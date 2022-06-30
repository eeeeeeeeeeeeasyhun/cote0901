#include<iostream>
using namespace std;
#include<vector>
#include<algorithm>

int main()
{
	int N;
	cin >> N;
	vector<int> v1;
	//항상 sort 로 함면 시간 초과됨 

	for (int i = 0; i < N; i++)
	{
		int M;
		cin >> M;
		v1.push_back(M);
		
		sort(v1.begin(), v1.end());

		if (i == 0)
			cout << v1[i] << endl;

		else if (i % 2 == 1)
		{
			int j = 0;
			j = i / 2;
			cout << min(v1[j], v1[j + 1]) << endl;
		}
		
		else
		{
			cout << v1[i / 2] << endl;
		}


	}
	 
}