#include<iostream>

using namespace std;

int max(int a, int b, int c){
    if(a>b&&a>c) return a;
    if(b>c) return b;
    else return c;
}

int main(){
    int dp[10001];
    int wine[10001];
    int n;

    cin>>n;

    for(int i=1; i<=n; i++){
        cin>>wine[i];
    }

    dp[1] = wine[1];
    dp[2] = wine[1] + wine[2];

    for(int i=3; i<=n; i++){

        // 마시지 않는다
        dp[i] = max(dp[i-1],
        // 현재 포도주를 마시고 전 포도주는 마시지 않는다
        wine[i] + dp[i-2],
        // 현재와 그 전포도주를 마시고 전전 포도주는 마시지 않는다
        wine[i] + wine[i-1] + dp[i-3]
        );
    }

    printf("%d\n", dp[n]);

    return 0;
}