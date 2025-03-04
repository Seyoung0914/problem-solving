// 별 찍기 - 16 성공
// 시간 제한	메모리 제한	제출	정답	맞힌 사람	정답 비율
// 1 초	256 MB	21289	16645	15032	79.033%
// 문제
// 예제를 보고 규칙을 유추한 뒤에 별을 찍어 보세요.

// 입력
// 첫째 줄에 N(1 ≤ N ≤ 100)이 주어진다.

// 출력
// 첫째 줄부터 N번째 줄까지 차례대로 별을 출력한다.
#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        for (int j = n - i - 1; j > 0; j--)
            cout << " ";
        for (int k = 0; k < i + 1; k++)
            cout << "* ";
        cout << endl;
    }
    return 0;
}