#include <cstring>
#include <string>
using namespace std;

int dy[4] = {0, 0, 1, -1}; // R - L - D - U
int dx[4] = {1, -1, 0, 0};
bool check[11][11][11][11] = {0};

int solution(string dirs)
{
    int answer = 0;

    int y = 5;
    int x = 5;

    memset(check, false, sizeof(check));
    for(int i=0; i<dirs.length(); ++i) {
        int dir;
        if(dirs[i]=='R') dir = 0;
        else if(dirs[i]=='L') dir = 1;
        else if(dirs[i]=='D') dir = 2;
        else if(dirs[i]=='U') dir = 3;

        int ny = y + dy[dir];
        int nx = x + dx[dir];
        if(ny < 0 || nx < 0 || ny > 10 || nx > 10) {
            continue;
        }
        if(!check[y][x][ny][nx]) {
            answer++;
            check[y][x][ny][nx] = check[ny][nx][y][x] = true;
        }
        y = ny;
        x = nx;
    }

    return answer;
}