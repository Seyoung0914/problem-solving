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
    // 0번~1번의 변화만 있어야 바이토닉 수열임
    // 즉 2번의 변화이상이 나오면 그것은 바이토닉 수열이 x
    // 가장 긴 바이토닉 수열의 길이를 구하라
    // 작아지는 수열과 커지는 수열의 dp를 동시에 구한다음 더한다.
    // 예를 들어 1,5,2,1,4,3,4,5,2,1 이 있으면
    // 5일 때 1,5 해서 커지는 수열의 최대길이를 그리고 5부터 2.. 작아지는 수열의 최대 길이를 그리고 그 두개를 더하는거야

    int dp1[1001] = {1};
    int dp2[1001] = {1};
    int arr[1001];

    int N;
    int answer = 1;

    cin >> N;
    for (int i = 1; i <= N; i++)
        cin >> arr[i];

    // 커지는 수열
    for (int i = 1; i <= N; i++)
    {
        dp1[i] = 1;
        for (int j = 1; j < i; j++)
        {
            if (arr[j] < arr[i])
            {
                dp1[i] = max(dp1[i], dp1[j] + 1);
            }
        }
        cout << "dp1 is " << dp1[i] << endl;
    }
    // 작아지는 수열
    for (int i = N; i >= 1; i--)
    {
        dp2[i] = 1;
        for (int j = N; j >= i; j--)
        {
            if (arr[i] < arr[j])
            {
                dp2[i] = max(dp2[i], dp2[j] + 1);
            }
        }
        cout << "dp2 is " << dp2[i] << endl;
    }

    for (int i = 1; i <= N; i++)
    {
        answer = max(answer, dp1[i] + dp2[i] - 1);
        cout << "dp[i] + dp2[i]" << dp1[i] + dp2[i] << endl;
        cout << "answer is " << answer << endl;
    }
    cout << answer << endl;
    // if (answer < dp1[i] + dp2[i])
    //     answer = dp1[i] + dp2[i];

    // cout << answer << endl;

    return 0;
}