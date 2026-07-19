#include <string>
#include <vector>

using namespace std;

bool solution(string s) {
    bool answer = true;
    
    int lenth = s.length();
    if(!(lenth==4||lenth==6)) {
        answer = false;
        return answer;
    }
    
    for(int i=0; i<s.length(); i++){
        if(!(s[i]>='0' && s[i]<='9')) {
            answer = false;
            return answer;
        }
    }
    return answer;
}