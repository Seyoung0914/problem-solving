#include <string>
#include <vector>

using namespace std;

int solution(int number, int limit, int power) {
    int answer = 0;
    
    // 약수의 개수
    for(int i=1; i<=number; i++){
        int knight_power = 0;
        for(int j=1; j<=i; j++){
            if(i%j==0) knight_power++;
        }
        if(knight_power > limit) answer += power;
        else answer += knight_power;
    }
    
    return answer;
}