// A+B - 7
// 시간 제한	메모리 제한	제출	정답	맞힌 사람	정답 비율
// 1 초	256 MB	332406	163719	140732	49.095%
// 문제
// 두 정수 A와 B를 입력받은 다음, A+B를 출력하는 프로그램을 작성하시오.

// 입력
// 첫째 줄에 테스트 케이스의 개수 T가 주어진다.

// 각 테스트 케이스는 한 줄로 이루어져 있으며, 각 줄에 A와 B가 주어진다. (0 < A, B < 10)

// 출력
// 각 테스트 케이스마다 "Case #x: "를 출력한 다음, A+B를 출력한다. 테스트 케이스 번호는 1부터 시작한다.

// #2 scanf이용하기

#include <iostream>

using namespace std;

int main()
{
    int a, b, num;

    cin >> num;

    for (int i = 0; i < num; i++)
    {
        scanf("%d %d", &a, &b);
        cout << "Case #" << i + 1 << ": " << a + b << endl;
    }
    return 0;
}