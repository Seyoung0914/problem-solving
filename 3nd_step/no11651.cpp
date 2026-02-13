#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool compare(pair<int, int> a, pair<int, int> b)
{
    if (a.second == b.second)
    {                             // x가 같은 경우에만,
        return a.first < b.first; // y를 기준으로 오름차순
    }
    else
    {
        return a.second < b.second; // x를 기준으로 오름차순
    }
}

int main()
{
    vector<pair<int, int>> v;
    int n;
    int x, y;

    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cin >> x >> y;
        v.push_back({x, y});
    }
    sort(v.begin(), v.end(), compare);

    for (int i = 0; i < n; i++)
    {
        cout << v[i].first << ' ' << v[i].second << '\n';
    }

    return 0;
}