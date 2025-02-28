// 별 찍기 - 8
// 시간 제한	메모리 제한	제출	정답	맞힌 사람	정답 비율
// 1 초	128 MB	44360	31974	28742	72.530%
// 문제
// 예제를 보고 규칙을 유추한 뒤에 별을 찍어 보세요.

// 입력
// 첫째 줄에 N(1 ≤ N ≤ 100)이 주어진다.

// 출력
// 첫째 줄부터 2×N-1번째 줄까지 차례대로 별을 출력한다.
#include <iostream>

using namespace std;

/*
2n-1줄만큼 출력이니까
그리고 그 만큼 반복해주면 돼
그니까 for문 세개의 조합이야
하나는 왼쪽별
    한개 두개..이렇게 가다가 n을 찍으면 다시 줄어드는 형태.

하나는 공백
    공백은 2n-2만큼 출력됌
하나는 오른쪽별
    왼쪽 별과 마찬가지
*/
#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;

    // 위쪽 삼각형 (1~N번째 줄)
    for (int i = 0; i < n; i++)
    {
        // 왼쪽 별
        for (int j = 0; j <= i; j++)
            cout << "*";

        // 공백
        for (int j = 0; j < 2 * (n - i - 1); j++)
            cout << " ";

        // 오른쪽 별
        for (int j = 0; j <= i; j++)
            cout << "*";

        cout << endl;
    }

    // 아래쪽 삼각형 (N+1 ~ 2N-1번째 줄)
    for (int i = n - 2; i >= 0; i--)
    {
        // 왼쪽 별
        for (int j = 0; j <= i; j++)
            cout << "*";

        // 공백
        for (int j = 0; j < 2 * (n - i - 1); j++)
            cout << " ";

        // 오른쪽 별
        for (int j = 0; j <= i; j++)
            cout << "*";

        cout << endl;
    }

    return 0;
}

#include "stdio.h"

int main(void)
{
    int n;
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        for (int j = 0; j < i; j++)
            printf("*");
        for (int j = 0; j < 2 * (n - i); j++)
            printf(" ");
        for (int j = 0; j < i; j++)
            printf("*");
        printf("\n");
    }
    for (int i = n - 1; i > 0; i--)
    {
        for (int j = 0; j < i; j++)
            printf("*");
        for (int j = 0; j < 2 * (n - i); j++)
            printf(" ");
        for (int j = 0; j < i; j++)
            printf("*");
        printf("\n");
    }
    return 0;
}
