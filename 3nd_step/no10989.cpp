#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n, num;

    cin >> n;

    vector<int> number;

    for (int i = 0; i < n; i++)
    {
        cin >> num;
        number.push_back(num);
    }

    sort(number.begin(), number.end());

    for (int i = 0; i < n; i++)
    {
        cout << number[i] << '\n';
    }

    return 0;
}