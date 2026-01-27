#include<iostream>

/*
1, 1, 1, 2, 2, 2+1, 3+1, 4+1, 5+2, 7+2, 9+3, 12+4, 16+5, 21+7 ...

dp[i] = dp[i-5] + dp[i-1]

*/

using namespace std;

int main(){

    int T, N;
    long long dp[101];

    cin >> T;

    dp[1] = 1, dp[2] = 1, dp[3] = 1, dp[4] = 2, dp[5] = 2;
    for (int i=1; i<=T; i++){
        cin >> N;
        for(int i=6; i<=N; i++){
            dp[i] = dp[i-5] + dp[i-1];
        }
        cout << dp[N] << endl;
    }

    return 0;
}