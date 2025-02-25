// 합 다국어
// 시간 제한	메모리 제한	제출	정답	맞힌 사람	정답 비율
// 1 초	128 MB	318555	203193	170988	63.947%
// 문제
// n이 주어졌을 때, 1부터 n까지 합을 구하는 프로그램을 작성하시오.

// 입력
// 첫째 줄에 n (1 ≤ n ≤ 10,000)이 주어진다.

// 출력
// 1부터 n까지 합을 출력한다.

#include <iostream>

using namespace std;

int main()
{
    int n, sum = 0;

    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        sum += i;
    }

    cout << sum;
}