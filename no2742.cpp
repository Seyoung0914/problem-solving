// 기찍 N
// 시간 제한	메모리 제한	제출	정답	맞힌 사람	정답 비율
// 1 초	128 MB	196801	134294	118137	68.950%
// 문제
// 자연수 N이 주어졌을 때, N부터 1까지 한 줄에 하나씩 출력하는 프로그램을 작성하시오.

// 입력
// 첫째 줄에 100,000보다 작거나 같은 자연수 N이 주어진다.

// 출력
// 첫째 줄부터 N번째 줄 까지 차례대로 출력한다.

#include <iostream>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int N;

    cin >> N;

    for (int i = N; i > 0; i--)
        cout << i << '\n';

    return 0;
}