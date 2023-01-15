#include <string>
#include <vector>
#include <set>
#include <utility>

using namespace std;

int solution(string dirs) {
    int to[2];
    int from[2];
    int x = 0, y = 0;
    set<pair<pair<int, int>, pair<int, int>>> answer;

    for (const auto& d : dirs) {
        from[0] = x;
        from[1] = y;
        
        if (d == 'L' && x > -5) {
            x--;
        }
        else if (d == 'U' && y < 5) {
            y++;
        }
        else if (d == 'R' && x < 5) {
            x++;
        }
        else if (d == 'D' && y > -5) {
            y--;
        }
        else { // 이미 초과한 범위에 대한 예외처리
            continue;
        }
        
        to[0] = x;
        to[1] = y;
        
        answer.insert(make_pair(make_pair(to[0], to[1]), make_pair(from[0], from[1])));
        answer.insert(make_pair(make_pair(from[0], from[1]), make_pair(to[0], to[1])));
    }
    
    return answer.size() / 2;
}