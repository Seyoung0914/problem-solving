#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<string> keymap, vector<string> targets) {
    vector<int> answer;

    vector<int> alphabet;
    for(int i=0; i<26; i++)
        alphabet.push_back(101);
    
    // 1. 먼저 알파벳 문자열을 업데이트 한다.
    for(int i=0; i<keymap.size(); i++){
        string key = keymap[i];
        for(int j=0; j<key.length(); j++){
            if(j<alphabet[key[j]-'A']) alphabet[key[j]-'A'] = j+1;
        }
    }
        
    // 2. target에 해당하는 값을 넣고 더한다.
    for(int i=0; i<targets.size(); i++){
        bool possible = true;
        int sum = 0;
        string target = targets[i];
        for(int j=0; j<target.length(); j++){
            sum += alphabet[target[j]-'A'];
            if(alphabet[target[j]-'A'] == 101){
                possible = false;
                break;
            }
        }
        if(possible) answer.push_back(sum);
        else answer.push_back(-1);
    }
        
        
    return answer;
}