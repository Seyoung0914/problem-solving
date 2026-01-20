#include <iostream>

using namespace std;

// 가장 긴 증가하는 부분수열을 구하라..!

/**
 * 시간제한 1시간
 *
 * 수열 A가 주어졌을 때, 가장 긴 증가하는 부분 수열을 구하는 프로그램을 작성하시오.

 *
 * 첫째 줄에 수열 A의 크기 N (1 ≤ N ≤ 1,000)이 주어진다.
 * 둘째 줄에는 수열 A를 이루고 있는 Ai가 주어진다. (1 ≤ Ai ≤ 1,000)
 *
 * 일단 max 를 통해서 전의 거랑 비교를 해야돼
 * dp를 사용한다는 뜻은 정보들을 저장한다는 뜻이야.
 * 즉, 이전 정보를 이용해서 현재 정보들을 간편하게 조합할 수 있다는 뜻이지.
 * 즉, 갯수를 샐거야. 가장 긴 증가하는 부분 수열을 구하는 것이기 때문에
 * 만약, 새로운 가장 긴 증가하는 부분수열이 나온다면
 * 예를 들어, 수열 A = {10, 20, 10, 30, 20, 50} 인 경우에
 * 가장 긴 증가하는 부분 수열은 A = {!10!, !20!, 10, !30!, 20, !50!} 이고, 길이는 4이다.
 * 만약에
 *
 */

int max(int A, int B)
{
    if (A > B)
        return A;
    return B;
}

int main()
{
    int N;
    int DP[1001] = {0};
    int input[1001] = {1};
    int num;
    int Max;
    int answer = 1;

    cin >> N;

    for (int i = 1; i <= N; i++)
    {
        cin >> num;
        input[i] = num;
        Max = 0;
        for (int j = i; j >= 1; j--)
        {
            // 1. input[j] 가 input[i] 보다 작고 max 값이면 거기에 +1 그렇지 않으면 그냥 그대로 go
            if (input[j] < input[i])
            {
                // cout << "!!" << endl;
                Max = max(Max, DP[j]);
            }
        }
        DP[i] = Max + 1;
        // cout << "DP[i] = " << DP[i] << endl;
        if (DP[i] > answer)
            answer = DP[i];
    }

    cout << answer << endl;
    ;

    return 0;
}
