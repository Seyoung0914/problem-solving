// 최소, 최대
// 시간 제한	메모리 제한	제출	정답	맞힌 사람	정답 비율
// 1 초	256 MB	430855	196373	147567	44.387%
// 문제
// N개의 정수가 주어진다. 이때, 최솟값과 최댓값을 구하는 프로그램을 작성하시오.

// 입력
// 첫째 줄에 정수의 개수 N (1 ≤ N ≤ 1,000,000)이 주어진다. 둘째 줄에는 N개의 정수를 공백으로 구분해서 주어진다. 모든 정수는 -1,000,000보다 크거나 같고, 1,000,000보다 작거나 같은 정수이다.

// 출력
// 첫째 줄에 주어진 정수 N개의 최솟값과 최댓값을 공백으로 구분해 출력한다.

// 방법 1
// #include <iostream>

// using namespace std;

// int main()
// {
//     ios::sync_with_stdio(false);
//     cin.tie(NULL);

//     int n;
//     cin >> n;

//     int maximum = -1000000;
//     int minimum = 1000000;

//     int input[1000000];
//     for (int i = 0; i < n; i++)
//     {
//         cin >> input[i];

//         if (input[i] >= maximum)
//             maximum = input[i];
//         if (input[i] <= minimum)
//             minimum = input[i];
//     }
//     cout << minimum << " " << maximum << endl;
//     return 0;
// }

// 방법 2
//  #include <iostream>

// using namespace std;

// int main()
// {

//     int n;
//     scanf("%d", &n);

//     int maximum = -1000000;
//     int minimum = 1000000;

//     int input[1000000];
//     for (int i = 0; i < n; i++)
//     {
//         scanf("%d", &input[i]);

//         if (input[i] >= maximum)
//             maximum = input[i];
//         if (input[i] <= minimum)
//             minimum = input[i];
//     }
//     printf("%d %d\n", minimum, maximum);
//     return 0;
// }

// 방법 3 by gpt
#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    int maximum = -1000000;
    int minimum = 1000000;

    for (int i = 0; i < n; i++)
    {
        int num;
        scanf("%d", &num);

        if (num > maximum)
            maximum = num;
        if (num < minimum)
            minimum = num;
    }

    printf("%d %d\n", minimum, maximum);
    return 0;
}

// 시간은 방법1>방법3>방법2>cin.tie와 ios::sync_with_studio(false) 모두 안쓴거