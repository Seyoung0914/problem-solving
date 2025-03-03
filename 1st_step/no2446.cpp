// 별 찍기 - 9
// 시간 제한	메모리 제한	제출	정답	맞힌 사람	정답 비율
// 1 초	128 MB	62452	37396	33751	60.348%
// 문제
// 예제를 보고 규칙을 유추한 뒤에 별을 찍어 보세요.

// 입력
// 첫째 줄에 N(1 ≤ N ≤ 100)이 주어진다.

// 출력
// 첫째 줄부터 2×N-1번째 줄까지 차례대로 별을 출력한다.
#include <iostream>

using namespace std;

int main()
{
    int n;

    cin >> n;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < i; j++)
            cout << " ";
        for (int k = 0; k < 2 * (n - i) - 1; k++)
            cout << "*";

        cout << endl;
    }
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - i - 2; j++)
            cout << " ";
        for (int k = 0; k < 2 * (i + 2) - 1; k++)
            cout << "*";
        cout << endl;
    }
}