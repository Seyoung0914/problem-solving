#include <string>
#include <vector>

using namespace std;

int solution(vector<string> babbling) {
    int answer = 0;
    int i = 0, j = 0;
    for(i; i<babbling.size();i++){
        j = 0;
        bool is_babbling = true;
        string prev;
        string baby = babbling[i];
        while(j<baby.size()){
            switch(baby[j]){
                case 'a':
                    if(prev == "aya") {
                        is_babbling = false;
                        break;
                    }
                    if(baby.substr(j,3) == "aya") {j+=3; prev="aya";}
                    else {
                        is_babbling = false;
                        break;
                    }
                    continue;
                case 'y':
                    if(prev == "ye") {
                        is_babbling = false;
                        break;
                    }
                    if(baby.substr(j,2) == "ye") {j+=2; prev="ye";}
                    else {
                        is_babbling = false;
                        break;
                    }
                    continue;
                case 'w':
                    if(prev == "woo") {
                        is_babbling = false;
                        break;
                    }
                    if(baby.substr(j,3) == "woo"){j+=3; prev = "woo";}
                    else {
                        is_babbling = false;
                        break;
                    }
                    continue;
                case 'm':
                    if(prev == "ma") {
                        is_babbling = false;
                        break;
                    }
                    if(baby.substr(j,2) == "ma") {j+=2; prev="ma";}
                    else {
                        is_babbling = false;
                        break;
                    }
                    continue;
                default: is_babbling = false; break;
            }
            if(!is_babbling) break;
        }
        if(is_babbling) answer ++;
    }
    return answer;
}