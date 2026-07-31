#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(int k, vector<int> score) {
    vector<int> answer, today;
    for(int i=0; i<score.size(); i++){
        today.push_back(score[i]);
        sort(today.begin(),today.end(),greater<int>());
        if(i<k-1) answer.push_back(today[i]);
        else answer.push_back(today[k-1]);
    }
    return answer;
}