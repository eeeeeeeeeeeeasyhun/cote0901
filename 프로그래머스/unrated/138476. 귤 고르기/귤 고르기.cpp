#include <string>
#include <vector>
#include <map>
#include <algorithm>
#include <iostream>
using namespace std;

bool cmp(const pair<int,int>& a, const pair<int,int>& b) {
	if (a.second == b.second) return a.first > b.first;
	return a.second > b.second;
}



int solution(int k, vector<int> tangerine) {
    int answer = 0;
    
    // map 쓰기 갯수 저장해서 현재 갯수보다 작거나 같은 과일 계속 채용 
    
    // 찾는걸 어케 >> 정렬?
   map<int, int> save;

    for(int i : tangerine){//ck찾기
        if (save.find(i) != save.end()) {
            save[i]+=1;
        }
        else {
            save.insert(pair<int, int>(i, 1));
        }
    }
    
    vector<pair<int,int>> all_list(save.begin(), save.end());
    
    sort(all_list.begin(),all_list.end(),cmp);
    
    
    int sel_index=0;
    
    while(k>0){
        if(k<=all_list[sel_index].second){
            answer+=1;
            break;
        }
        else{
            answer+=1;
            k-=all_list[sel_index].second;
        }
        sel_index+=1;
    }
    
    
    return answer;
}