#include <string>
#include <vector>
#include <iostream>

using namespace std;

int solution(string t, string p) {
    int answer = 0;
    long long condition = stoll(p);
    
    for(int i=0; i+p.size() <= t.size(); i++){
        long long num = stoll(t.substr(i,(p.size())));
        if(num <= condition) answer ++ ;
    }
    
    return answer;
}