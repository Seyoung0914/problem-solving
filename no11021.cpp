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

// 1. << 연산자 (출력 연산자)
// cout과 함께 사용하여 출력하는 역할을 함.
// 여러 데이터를 연속해서 출력할 때 자동으로 문자열과 숫자를 구분하여 출력해 줌.
// 📌 예제: << 연산자 사용

// int main() {
//     int a = 3, b = 4;
//     cout << "Sum: " << a + b << endl;
//     return 0;
// }
// 📌 실행 결과

// Sum: 7
// ✔ << 연산자를 사용하면 cout이 알아서 "Sum: "과 7을 붙여서 출력해 줌.

// 2. + 연산자 (덧셈 또는 문자열 연결)
// + 연산자는 연산 대상(피연산자)이 무엇이냐에 따라 다르게 동작해.

// 🔹 1) 숫자끼리 사용하면 덧셈
// int a = 3, b = 4;
// cout << a + b;  // 결과: 7
// ✔ +는 숫자끼리 사용하면 덧셈 연산을 수행함.

// 🔹 2) 문자열끼리 사용하면 연결
// #include <iostream>
// #include <string>
// using namespace std;

// int main() {
//     string str1 = "Hello, ";
//     string str2 = "World!";
//     cout << str1 + str2 << endl; // 문자열 연결
//     return 0;
// }
// 📌 실행 결과
// Hello, World!
// ✔ C++에서는 string 타입의 문자열끼리는 + 연산자로 연결 가능!