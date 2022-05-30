#include<iostream>
using namespace std;
int n;

void line(int m)
{
    for (int i = 0; i < m; i++)
    {
        cout << "____";
    }
}

void recursion(int depth) 
{
    line(depth);
    cout << "\"����Լ��� ������?\"\n";

    if (depth == n) {
        line(depth);

        cout << "\"����Լ��� �ڱ� �ڽ��� ȣ���ϴ� �Լ����\"\n";
        line(depth);

        cout << "��� �亯�Ͽ���.\n";
        return;
    }

    line(depth);

    cout << "\"�� ����. �������� �� �� ����⿡ �̼��� ��� ������ ����� ������ �־���.\n";
    line(depth);

    cout << "���� ������� ��� �� ���ο��� ������ ������ �߰�, ��� �����Ӱ� ����� �־���.\n";
    line(depth);

    cout << "���� ���� ��κ� �ǾҴٰ� �ϳ�. �׷��� ��� ��, �� ���ο��� �� ���� ã�ƿͼ� ������.\"\n";

    recursion(depth + 1);

    line(depth);

    cout << "��� �亯�Ͽ���.\n";  
}

int main() {
    cin >> n;
    cout << "��� �� ��ǻ�Ͱ��а� �л��� ������ �������� ã�ư� ������.\n";
    recursion(0);
}