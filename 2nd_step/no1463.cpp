// 1로 만들기
// 시간 제한	메모리 제한	제출	정답	맞힌 사람	정답 비율
// 0.15 초 (하단 참고)	128 MB	347563	120894	77159	33.401%
// 문제
// 정수 X에 사용할 수 있는 연산은 다음과 같이 세 가지 이다.

// X가 3으로 나누어 떨어지면, 3으로 나눈다.
// X가 2로 나누어 떨어지면, 2로 나눈다.
// 1을 뺀다.
// 정수 N이 주어졌을 때, 위와 같은 연산 세 개를 적절히 사용해서 1을 만들려고 한다. 연산을 사용하는 횟수의 최솟값을 출력하시오.

// 입력
// 첫째 줄에 1보다 크거나 같고, 106보다 작거나 같은 정수 N이 주어진다.

// 출력
// 첫째 줄에 연산을 하는 횟수의 최솟값을 출력한다.

// // 시간 초과가 떠버리네..
// #include <iostream>

// using namespace std;

// int main()
// {
//     ios::sync_with_stdio(false);
//     cin.tie(NULL);
//     int n, c = 0;
//     cin >> n;

//     while (n != 1)
//     {
//         if ((n - 1) % 3 == 0)
//         {
//             n--;
//             n = n / 3;
//             c += 2;
//             // cout << "1을 빼서 3으로 나눔" << endl;
//         }

//         if (n % 3 == 0)
//         {
//             n = n / 3;
//             c++;
//             // cout << "3으로 나눔" << endl;
//             continue;
//         }
//         else if (n % 2 == 0)
//         {
//             n = n / 2;
//             c++;
//             // cout << "2로 나눔" << endl;
//             continue;
//         }
//         else
//         {
//             // cout << "1을 뺌" << endl;
//             n--;
//             c++;
//             continue;
//         }
//     }

//     cout << c << endl;
// }

// 방법 1 gpt
// #include <iostream>
// #include <algorithm> // min() 사용

// using namespace std;

// int dp[1000001]; // dp[i]: i를 1로 만들기 위한 최소 연산 횟수

// int main()
// {
//     ios::sync_with_stdio(false);
//     cin.tie(NULL);

//     int n;
//     cin >> n;

//     dp[1] = 0; // 1은 연산 없이 1이므로 0

//     for (int i = 2; i <= n; i++)
//     {
//         // 기본적으로 1을 빼는 연산을 수행한 경우
//         dp[i] = dp[i - 1] + 1;

//         // 2로 나누어 떨어지면 최소값 갱신
//         if (i % 2 == 0)
//             dp[i] = min(dp[i], dp[i / 2] + 1);

//         // 3으로 나누어 떨어지면 최소값 갱신
//         if (i % 3 == 0)
//             dp[i] = min(dp[i], dp[i / 3] + 1);
//     }

//     cout << dp[n] << '\n'; // 최종 결과 출력
//     return 0;
// }

// 방법 2 재귀함수 이용

#include <stdio.h>

int Sol(int n)
{
    if (n <= 1)
        return 0;

    int s1 = Sol(n / 3) + n % 3 + 1;
    int s2 = Sol(n / 2) + n % 2 + 1;

    return (s1 < s2) ? s1 : s2;
}

int N;

int main()
{
    scanf("%d", &N);

    printf("%d", Sol(N));
}

#include <iostream>

using namespace std;

int cal(int n)
{
    if (n <= 1)
        return 0;

    int s1 = cal(n / 3) + n;
}