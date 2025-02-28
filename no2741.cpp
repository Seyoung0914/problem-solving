// N 찍기
// 시간 제한	메모리 제한	제출	정답	맞힌 사람	정답 비율
// 1 초	128 MB	290533	163680	139570	57.488%
// 문제
// 자연수 N이 주어졌을 때, 1부터 N까지 한 줄에 하나씩 출력하는 프로그램을 작성하시오.

// 입력
// 첫째 줄에 100,000보다 작거나 같은 자연수 N이 주어진다.

// 출력
// 첫째 줄부터 N번째 줄 까지 차례대로 출력한다.

// 1 c스타릴
#include <iostream>
#include <cstdio> // C 스타일 입출력을 위해 필요

using namespace std;

int main()
{
    int N;
    scanf("%d", &N); // ✅ `scanf()`로 입력

    for (int i = 1; i <= N; i++)
    {
        printf("%d\n", i); // ✅ `printf()`로 출력
    }

    return 0;
}

// 2 c++스타일

#include <iostream>

using namespace std;

int main()
{
    ios::sync_with_stdio(false); // 🚀 C++ 입출력 속도 향상
    cin.tie(NULL);               // 🚀 `cin`과 `cout`의 연결 해제 (더 빠른 출력)

    int N;
    cin >> N; // ✅ `cin`으로 입력

    for (int i = 1; i <= N; i++)
    {
        cout << i << '\n'; // ✅ `cout`으로 출력 (`endl`보다 빠름)
    }

    return 0;
}
