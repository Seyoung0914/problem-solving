#include <string>
#include <vector>
#include <iostream>

using namespace std;

const int DIVIDOR = 1234567;

int solution(int n) {

    int fibo[100000];
    fibo[0] = 0;
    fibo[1] = 1;

    for(int i=0; i<n-1; i++){
        fibo[i+2] = (fibo[i+1] + fibo[i]) % DIVIDOR;
    }
    
    return fibo[n];
    
}