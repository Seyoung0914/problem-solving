#include <string>
#include <vector>
#include <iostream>

using namespace std;

bool solution(int x) {
    int a = x;
    bool answer = false;
    int b = 0;
    while(a>10){
        b += a%10;
        a = a/10;
    }

    b+= a;
    if(x%b==0) answer = true;
    return answer;
}
