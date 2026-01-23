#include<iostream>

using namespace std;
const int MAX = 301;

/*
1. 한계단이나 두계단 오를 수 있다.
2. 한번에 세개의 계단을 오를 수는 없다.

한번에 한계단 오르는거랑 두계단 올랐을 때랑 비교를 하는거지

10 -> 10
20 -> 30
15 -> (30 > 10+15) -> 30
25 -> (30 < 25+30) -> 55
10 -> (55 > 30+10) -> 55
20 -> (55+20 > 55) -> 75

근데 중복은 어떻게 하지..
음 그러지말고
연속 두계단이랑
한계단이랑 비교를 하는거지

마지막 계단을 무조건 밟는 방법?
마지막은 밟는 걸로 하고
그 전거 밟는게 더 높은지
안 밟는게 더 높은지만 비교

-> 밟고 안밟고 밟고
-> 안밟고 밟고 밟고
요 둘중에 더 큰값을 취하면 됌
dp[N-2] + arr[N]
dp[N-3] + arr[N-1] + arr[N]

*/

int max(int a, int b){  
    return a > b ? a : b;
}


int main(){
    
    int N;
    int arr[MAX];
    int dp[MAX];

    cin >> N;
    for(int i=1; i<=N; i++) cin >> arr[i];

    dp[1] = arr[1];
    dp[2] = arr[1] + arr[2];
    dp[3] = max(arr[2]+arr[3], arr[1]+arr[3]);
    for(int i=4; i<=N; i++){
        dp[i] = max(dp[i-2]+arr[i], dp[i-3] + arr[i-1] + arr[i]);
    }

    cout << dp[N] << endl;


    return 0;
}