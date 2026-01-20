#include <iostream>

using namespace std;

int max(int A, int B)
{
    if (A > B)
        return A;
    return B;
}

int main()
{
    int arr[1001] = {0};
    int dp[1001] = {0};
    int answer = 1;
    int N;
    int max_num;

    cin >> N;
    for (int i = 1; i <= N; i++)
    {
        cin >> arr[i];
    }

    for (int i = 1; i <= N; i++)
    {
        max_num = arr[i];
        for (int j = i; j >= 0; j--)
        {
            if (arr[j] < arr[i])
            {
                max_num = max(dp[j] + arr[i], max_num);
            }
        }
        dp[i] = max_num;
        if (answer < max_num)
            answer = max_num;
    }
    cout << answer << endl;

    return 0;
}