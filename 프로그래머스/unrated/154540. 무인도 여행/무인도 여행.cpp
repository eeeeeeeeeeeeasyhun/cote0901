#include <iostream>
#include <string>
#include <vector>
#include <cctype>
#include <algorithm>

using namespace std;

int N, M;
// 북, 동, 남, 서
int dRow[4] = {-1,0,1,0};
int dCol[4] = {0,1,0,-1};
int result = 0;

void dfs(int x, int y, vector<vector<int>>& visited, vector<string>& maps);

void dfs(int x, int y, vector<vector<int>>& visited, vector<string>& maps) {
    visited[x][y] = 1;
    int num = maps[x][y] - '0';
    result += num;
    for (int i = 0; i < 4; i++) {
        int nx = x+dRow[i];
        int ny = y+dCol[i];
        if ((!(nx < 0 || nx >= N) && !(ny < 0 || ny >= M)) && visited[nx][ny] == 0 && isdigit(maps[nx][ny]) == true) {
            dfs(nx, ny, visited, maps);
        }
    }
    // cout << x << " ";
    //  // 인접한 노드 사이즈만큼 탐색
    // {
    //  int y = graph[x][i];
    //  if (!visited[y]) // 방문하지 않았으면 즉 visited가 False일 때 not을 해주면 True가 되므로 아래 dfs 실행
    // dfs(y); // 재귀적으로 방문
    // }
}

vector<int> solution(vector<string> maps) {
    vector<int> answer;

    N = maps.size();
    M = maps[0].length();

    vector<vector<int>> visited(N, vector<int> (M, 0));
    for(int row = 0; row < N; row++) {
        for (int col = 0; col < M; col++) {
            if (isdigit(maps[row][col]) == true && visited[row][col] == 0) {
                dfs(row, col, visited, maps);
                answer.push_back(result);
                result = 0;
            }
        }
    }

    if (answer.empty() == false) {
        sort(answer.begin(),answer.end());
    }
    else {
        answer.push_back(-1);
    }

    return answer;
}