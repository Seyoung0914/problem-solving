#include <iostream>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);

    int n;

    cin >> n;

    for (int i = 0; i < n / 4; i++)
    {
        cout << "long ";
    }

    cout << "int" << endl;

    return 0;
}