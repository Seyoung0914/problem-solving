// A+B - 2
// 시간 제한	메모리 제한	제출	정답	맞힌 사람	정답 비율
// 1 초	128 MB	121393	85827	77195	72.167%
// 문제
// 두 정수 A와 B를 입력받은 다음, A+B를 출력하는 프로그램을 작성하시오.

// 입력
// 첫째 줄에 A, 둘째 줄에 B가 주어진다. (0 < A, B < 10)

// 출력
// 첫째 줄에 A+B를 출력한다.

#include <iostream>

using namespace std;

int add(int a, int b)
{
    return a + b;
}

int main()
{

    int a, b;

    cin >> a;
    cin >> b;

    cout << add(a, b);

    return 0;
}
