// 별 찍기 - 8 성공
// 시간 제한	메모리 제한	제출	정답	맞힌 사람	정답 비율
// 1 초	128 MB	44406	32012	28777	72.539%
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
        for (int j = 0; j < i + 1; j++)
            cout << "*";
        for (int j = 2 * (n - i - 1); j > 0; j--)
            cout << " ";
        for (int j = 0; j < i + 1; j++)
            cout << "*";
        cout << endl;
    }
    for (int i = n - 1; i > 0; i--)
    {
        for (int j = i; j > 0; j--)
            cout << "*";
        for (int j = 0; j < 2 * (n - i); j++)
            cout << " ";
        for (int j = i; j > 0; j--)
            cout << "*";
        cout << endl;
    }

    return 0;
}