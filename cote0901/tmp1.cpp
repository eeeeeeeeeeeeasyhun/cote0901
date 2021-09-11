#include<iostream>
using namespace std;
#include<vector>




void main()
{
	int N;
	cin >> N;
	vector<int> arr;
	float arr1[3] = { 0,0,0 };

	int iTmp;
	for (int i = 0; i < N; i++)
	{
		cin >> iTmp;
		arr.push_back(iTmp);
	}

	for (int i = 0; i < N; i++)
	{
		if (arr[i] < 0)
			arr1[1] += arr[i];

		else if (arr[i] > 0)
			arr1[0] += arr[i];

		else
			arr1[2] += arr[i];
	}

	for (int i = 0; i < 3; i++)
	{
		cout << arr1[i] / N << endl;
	}

}