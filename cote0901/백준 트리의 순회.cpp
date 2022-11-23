#include <stdio.h>
#include<iostream>
using namespace std;
#define MAX 20



// 노드 구조체를 생성합니다.
typedef struct node {
	char name;
	struct node* left;
	struct node* right;
}node;


string msg = "ABCEDF";
node input[50001];

int index = 0;



// next는 char를 받아서 다음 노드를 생성하는 함수입니다.
int next(char data)
{
	int count = 0;

	// 현재 노드가 비어있지 않다면
	while (input[count].name != NULL) {

		// 그 left 노드가 비어있는지 확인 후 비어있으면 생성
		if (input[count].left == NULL) {
			input[index].name = data;
			input[count].left = &input[index];
			index++;
			return 0;
		}

		// 그 right 노드가 비어있는지 확인 후 비어있으면 생성
		else if (input[count].right == NULL) {
			input[index].name = data;
			input[count].right = &input[index];
			index++;
			return 0;
		}

		// left와 right모두 비어있지 않다면 다음 노드로 이동
		else {
			count++;
		}
	}

	// 현재 노드가 비어있다면 (첫번째 노드인 경우)
	if (input[count].name == NULL)
		input[index++].name = data;

	// 의미없는 -1 반환
	return -1;
}

void postorder(node* root)
{
	if (root != NULL)
	{
		postorder(root->left);
		postorder(root->right);
		cout << root->name;
	}
}

int main(void)
{

	string msg = "ABCEDF";

	// 한줄로 데이터를 입력받습니다.
	//char data[MAX];
	//gets(data);

	// 정해진 개수만큼 이진 트리에 추가합니다.
	for (int i = 0; i < msg.length(); i++)
	{
		next(msg[i]);
	}


	postorder(&input[0]);
}