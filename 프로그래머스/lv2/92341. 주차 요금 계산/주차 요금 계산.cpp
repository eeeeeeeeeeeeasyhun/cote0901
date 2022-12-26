#include <string>
#include <vector>
#include <sstream>
#include <iostream>
#include <unordered_map>
#include <algorithm>
#include <math.h>
using namespace std;
//3시간에 5000원 10분 단위로 600원
//fees :기본시간, 기본요금, 단위 시간, 단위 요금

int splitTime(string in, string out) {
    int hour_diff = stoi(out.substr(0,2)) - stoi(in.substr(0,2));
    int min_diff = stoi(out.substr(3,2)) - stoi(in.substr(3,2));
    
    int total_diff = hour_diff * 60 + min_diff;
    return total_diff;
}

vector<int> solution(vector<int> fees, vector<string> records) {
    vector<int> answer;
    vector<pair<string,int>> tmp;
    unordered_map<string,vector<string>> map;
    unordered_map<string, int> res;
    
    for(int i = 0; i< records.size(); i++) {
        stringstream ss(records[i]);
        string tmp;
        vector<string> info;
        while (ss >> tmp) 
            info.push_back(tmp);
        
        if(info[2] == "IN") {
            map[info[1]].push_back(info[0]);
        }
        //out이면 계산을 한다.
        else {
            string out_time = info[0];
            string in_time = map[info[1]].back();
            map[info[1]].pop_back();
            int diff = abs(splitTime(out_time, in_time));
            res[info[1]] += diff;     
        }      
    }
    
    for(auto it : map) {
        if(!map[it.first].empty()) {
            res[it.first] += abs(splitTime("23:59",map[it.first].back()));
        }
    }
    
    for(auto it : res) {
        int price = 0;
        if(it.second <= fees[0]) price = fees[1];
        else {
            price = fees[1] + ceil((double)(it.second - fees[0]) / fees[2]) * fees[3];

        }
        tmp.push_back({it.first, price});
        
    }
    
    sort(tmp.begin(), tmp.end());
    
    for(int i = 0; i < tmp.size(); i++)
        answer.push_back(tmp[i].second);
    return answer;
}