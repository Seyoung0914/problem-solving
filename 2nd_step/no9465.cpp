#include<iostream>
using namespace std;

int max(int a, int b){  
    return a > b ? a : b;
}

int main(){
    int n;
    int input;

    scanf("%d", &n);

    while(n > 0){

        n--;
    
        scanf("%d", &input);
        
        int dp[2][100001];
        int s[2][100001];
        
        for(int i=0; i<2; i++){
            for(int j=0; j<input; j++)
                scanf("%d", &s[i][j]);
        }

        dp[0][0] = s[0][0];
        dp[1][0] = s[1][0];

        dp[0][1] = dp[1][0] + s[0][1];
        dp[1][1] = dp[0][0] + s[1][1];

        for(int i=2; i<input; i++){
            dp[0][i] = max(dp[1][i-1], dp[1][i-2])+s[0][i];
            dp[1][i] = max(dp[0][i-1], dp[0][i-2])+s[1][i];
        }

        printf("%d\n", max(dp[0][input-1],dp[1][input-1]));
    }
    return 0;

    
}