#include<iostream>

/*

2 1 -4 3 4 -4 6 5 -5 1
연속된 수열을 구해야 한다.
합들을 하나하나 구해야 하나
근데 확실한건 양수끼리는 무조건 더하는게 이득이라는 거
거기에 이제 음수를 더하는게 맞냐 아니냐로 갈리는거지

어떻게 해야 이 문제를 풀 수 있을까 일단 dp문제인건 아는데

결국에 연속 된 수니까
1. 양수면 그냥 더하면 됌
2. 음수면 판단을 해야 해
    -> 음수들을 더하는게 이득인가?.
    -> 음수들을 다 더한 뒤 나오는 양수들까지 더한 뒤에 알 수 있음.
    -> 이건 어떻게 쉽게 알 수 있을까?
    -> dp를 n번째 까지 연속된 최적의 수로 가정하면?

    dp[1] =  2
    dp[2] = 2+1 = 3
    dp[3] = -1
    dp[4] = 3
    dp[5] = 7
    dp[6] = 3
    dp[7] = 9
    dp[8] = 14
    dp[9] = 9
    dp[10] = 10



*/

using namespace std;
const int MAX = 100001;

int max(int A, int B)
{
    if (A < B)
        return B;
    return A;
}

int main(){


    int dp[MAX];
    int arr[MAX];
    int N;
    int answer;

    cin >> N;
    for(int i=1; i<=N; i++) cin >> arr[i];

    dp[1] = arr[1];
    answer = arr[1];
    for(int i=2; i<=N; i++){
        dp[i] = max(dp[i-1]+arr[i], arr[i]);
        answer = max(answer, dp[i]);
    }
    cout << answer << endl;

    return 0;
}