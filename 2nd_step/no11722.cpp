#include <iostream>

using namespace std;

int max(int A, int B)
{
    if (A < B)
        return B;
    return A;
}

int main()
{
    int arr[1001];
    int dp[1001];
    int N;
    int answer = 1;

    cin >> N;
    for (int i = 1; i <= N; i++)
        cin >> arr[i];

    for (int i = 1; i <= N; i++)
    {
        dp[i] = 1;
        for (int j = 1; j < i; j++)
        {
            if (arr[i] < arr[j])
            {
                dp[i] = max(dp[i], dp[j] + 1);
            }
        }
        // cout << "dp[i] = " << dp[i] << endl;
        answer = max(answer, dp[i]);
    }
    cout << answer << endl;

    return 0;
}