#include <iostream>

using namespace std;

const long long MOD = 1000000000;
long long dp[101][10]; // 0~9까지만 필요함 (11 → 10으로 수정)

void Solution()
{
    int n;
    cin >> n;

    for (int i = 1; i <= 9; i++)
    {
        dp[1][i] = 1; // 1자리 계단 수는 1~9까지 각각 1개씩 존재
    }

    for (int i = 2; i <= n; i++)
    {
        for (int j = 0; j <= 9; j++)
        {
            if (j == 0)
                dp[i][j] = dp[i - 1][j + 1] % MOD;
            else if (j == 9)
                dp[i][j] = dp[i - 1][j - 1] % MOD;
            else
                dp[i][j] = (dp[i - 1][j - 1] + dp[i - 1][j + 1]) % MOD;
        }
    }

    long long answer = 0;
    for (int i = 0; i <= 9; i++)
        answer = (answer + dp[n][i]) % MOD;

    cout << answer << '\n';
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    Solution(); // 불필요한 Solve() 함수 없이 직접 호출
    return 0;
}
