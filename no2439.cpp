// 별 찍기 - 2
// 시간 제한	메모리 제한	제출	정답	맞힌 사람	정답 비율
// 1 초	128 MB	367885	205553	172661	56.035%
// 문제
// 첫째 줄에는 별 1개, 둘째 줄에는 별 2개, N번째 줄에는 별 N개를 찍는 문제

// 하지만, 오른쪽을 기준으로 정렬한 별(예제 참고)을 출력하시오.

// 입력
// 첫째 줄에 N(1 ≤ N ≤ 100)이 주어진다.

// 출력
// 첫째 줄부터 N번째 줄까지 차례대로 별을 출력한다.
#include <iostream>

using namespace std;

int main()
{
    int N;

    cin >> N;

    for (int i = 0; i < N; i++)
    {
        for (int k = N; k > i + 1; k--)
            cout << " ";
        for (int m = 0; m <= i; m++)
            cout << "*";
        cout << endl;
    }
    return 0;
}