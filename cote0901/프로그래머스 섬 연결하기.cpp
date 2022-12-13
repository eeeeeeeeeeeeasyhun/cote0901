#include <string>
#include <vector>
#include <algorithm>


using namespace std;

//�ð� ���⵵: O(elogn) (n: ������ ����, e: ������ ����)
//���� ���⵵: O(en)
//����� �˰���: ũ�罺Į �˰���
//����� �ڷᱸ��: ��������Ʈ


// d[i]�� ���� i�� �θ� ������ �ִ´�.
int d[101];


// find�� �ֻ��� �θ� ã�� �Լ�
int find(int node)
{
    // 1) ���� �θ� �ڱ��ڽ��̸� ���� ��尡 �ֻ��� �θ��̴�.
    if (node == d[node]) return node;

    // 2) �ƴ϶�� �ֻ��� �θ��� �θ� ã�´�. 
    else return d[node] = find(d[node]);
}


// ������ ����ġ�� �������� �������� ����
bool cmp(const vector<int>& a, const vector<int>& b)
{
    return a[2] < b[2];
}


int solution(int n, vector<vector<int>> costs)
{
    int answer = 0;
    // 1. d[i] = i�� �θ� ��´�. ó������ �ڱ� �ڽ��� �θ��̴�.
   // disjoint-set�� ����ϱ� ���� �ʱ�ȭ
    for (int i = 0; i < n; i++)
    {
        d[i] = i;
    }
    // 2. ������ ����ġ ���� �������� ����
    sort(costs.begin(), costs.end(), cmp);

    // 3. ��� ������ �˻��Ѵ�.
    for (int i = 0; i < costs.size(); i++)
    {
        int start = find(costs[i][0]);
        int end = find(costs[i][1]);
        int cost = costs[i][2];



        // 4. start�� end�� ���� ������� �ʾҴٸ�
        if (start != end)
        {
            // 1) start�� �θ� end�� �����ϰ�
            d[start] = end;

            // 2) ������ ����ġ�� ����� �����ش�.
            answer += cost;
        }
    }

    return answer;
}
