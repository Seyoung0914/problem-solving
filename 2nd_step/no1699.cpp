#include<iostream>

using namespace std;
const int MAX = 100001;

// 주어진 자연수를 제곱수의 합으로 나타낼 때에 그 제곱수 항의 최소 개수를 출력한다.
// 제곱수 항의 최소 개수를 출력한다. ex) 7 = 2^2 + 1^2 + 1^2 + 1^2 = 4개
// 하나씩 넓혀가면서 해야겠는데? 브루트 포스로 할 수 있을거 같긴 한디
// 아 이거 dp 쓰먄 쉽네. 결국에 제곱수 구해서 빼면 그 다음에 구할 제곱수나 마찬가지니까 거기서 dp쓰먄 굳
// 제곱수가 구하는 수보다 크기 전까지 제곱수 구한다음에 빼고 뺀제곱수에 해당하는 dp + 1 하면 끝이네.

int min(int a, int b){  
    return a < b ? a : b;
}

int main(){
    int number;
    int dp[MAX];

    cin >> number;

    dp[0] = 0;
    dp[1] = 1;
    for(int i=2; i<=number; i++){
        dp[i] = number;
        for(int j=1; j*j<=i; j++){
            // 12 -> 9 + 1 + 1 + 1 < 4 + 4 + 4 best!
            dp[i] = min(dp[i-j*j] + 1, dp[i]);
        }
        // cout << "dp[" << i << "] = " << dp[i] << endl;
    }
    cout << dp[number] << endl;

    return 0;
}