#include <string>
#include <vector>
#include <unordered_map>
#include <iostream>
using namespace std;

vector<int> solution(string s) {
    vector<int> answer;
    unordered_map<char, int> um;
    
    // 1. 문자열 전체를 돌면서 -> for 반복문으로 문자열 길이만큼 반복
    for(int i=0; i<s.size(); i++){
        if(um.contains(s[i])){
            answer.push_back(i - um[s[i]]);
        } 
        else {
            answer.push_back( -1);
        }
        um[s[i]] = i;
    }
    
    
    // 2. map에 넣을건데 map에 넣을 때 value를 -1로 시작해서 하나씩 올리면서 시작함
    // 3. 그 전에 map에 있는지 없는지 검사해야 함
    // 4. 마지막에 전체 다 추력
    
    return answer;
}