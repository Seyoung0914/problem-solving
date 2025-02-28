// 열 개씩 끊어 출력하기
// 시간 제한	메모리 제한	제출	정답	맞힌 사람	정답 비율
// 1 초	256 MB	79285	43812	37920	55.850%
// 문제
// 알파벳 소문자와 대문자로만 이루어진 길이가 N인 단어가 주어진다.

// 한 줄에 10글자씩 끊어서 출력하는 프로그램을 작성하시오.

// 입력
// 첫째 줄에 단어가 주어진다. 단어는 알파벳 소문자와 대문자로만 이루어져 있으며, 길이는 100을 넘지 않는다. 길이가 0인 단어는 주어지지 않는다.

#include <iostream>
#include <string>

using namespace std;

int main()
{
    char input[101];

    cin >> input;

    int i = 0;

    while (input[i] != '\0')
    {
        cout << input[i];
        if (((i + 1) % 10) == 0)
            cout << endl;
        i++;
    }

    return 0;
}

int main()
{
    string input;
    cin >> input;

    for (int i = 0; i < input.length(); i++)
    {
        cout << input[i];

        if ((i + 1) % 10 == 0)
            cout << endl;
    }
    return 0;
}

// 방법 3 substring

int main()
{
    string input;
    cin >> input;

    for (int i = 0; i < input.length(); i += 10)
        cout << input.substr(i, 10) << endl;
    return 0;
}
