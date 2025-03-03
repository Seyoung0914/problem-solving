//
#include <iostream>

using namespace std;

int main()
{
    // 1월은 나머지가 1이면 -> 월요일, 2이면 화요일 ... 1월 1일 => 월요일 1월 8일 => 월요일..
    // 2월은 어떻게 가냐? 2월은.. 1월 다 끝내고 더 하는거지 그니까 1월은 30이고, 2월부터는 1월 만큼을 더해서..
    // 다시 나머지를 가지는거지.. 1월 31일까지 있잖아. 그니까 2월 1은 32로 치는거야. 그러면 몇요일? 7로 나눠봐
    // 나머지가 4잖아. 그러면 목요일인거지 오케이 그럼 끝났어
    int m, d, sum = 0;

    cin >> m >> d;

    int month[11] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30};

    for (int i = 1; i < m; i++)
    {
        sum += month[i - 1];
    }
    sum += d;

    if (sum % 7 == 1)
        cout << "MON";
    if (sum % 7 == 2)
        cout << "TUE";
    if (sum % 7 == 3)
        cout << "WED";
    if (sum % 7 == 4)
        cout << "THU";
    if (sum % 7 == 5)
        cout << "FRI";
    if (sum % 7 == 6)
        cout << "SAT";
    if (sum % 7 == 0)
        cout << "SUN";
}

// 다른 코드=>아예 배열로 마무리
#include <stdio.h>

using namespace std;
int main()
{
    char w[7][4] = {"SUN", "MON", "TUE", "WED", "THU", "FRI", "SAT"};
    int month[] = {0, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    int m, d, sum = 0;
    scanf("%d %d", &m, &d);
    for (int i = 1; i < m; i++)
    {
        sum += month[i];
    }
    sum += d;
    printf("%d", w[sum % 7]);
    return 0;
}
