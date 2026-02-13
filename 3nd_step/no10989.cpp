#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n, num;
    int number[10001] = {0};
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        cin >> num;
        number[num]++;
    }

    for (int i = 1; i <= 10000; i++)
    {
        for (int j = 1; j <= number[i]; j++)
            cout << i << '\n';
    }

    return 0;
}