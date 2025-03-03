// 문제
// 두 정수 A와 B를 입력받은 다음, A+B를 출력하는 프로그램을 작성하시오.

// 입력
// 첫째 줄에 테스트 케이스의 개수 T가 주어진다.

// 각 테스트 케이스는 한 줄로 이루어져 있으며, 각 줄에 A와 B가 주어진다. A와 B는 콤마(,)로 구분되어 있다. (0 < A, B < 10)

// 출력
// 각 테스트 케이스마다 A+B를 출력한다.
#include <iostream>

using namespace std;

int main()
{
    int n, a, b;
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        scanf("%d, %d", &a, &b);
        printf("%d\n", a + b);
    }
}

// 신기한 풀이
int main()
{
    int a, b, num;
    char comma;

    cin >> num;

    for (int i = 0; i < num; i++)
    {
        cin >> a >> comma >> b;
        cout << a + b << endl;
    }
    return 0;
}