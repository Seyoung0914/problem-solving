#include<iostream>

using namespace std;

#define MAX 100001


int max(int a, int b){
    return a>b?a:b;
}

int main(){

    int dp[MAX];
    int arr[MAX];
    int n;

    cin >> n;
    
    // 1부터 n까지
    for(int i=1; i<=n; i++){
        cin >> arr[i];
    }
    
    dp[1] = arr[1];
    for(int i=2; i<=n; i++){
        dp[i] = arr[i];
        for(int j=1; j<=i/2; j++){
            dp[i] = max(dp[i], dp[j]+dp[i-j]);
            // cout << dp[i] << " ";
        }
    }
    cout << dp[n] << endl;

    return 0;
}