#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

using namespace std;

bool compare(const pair<int, string> &a, const pair<int, string> &b)
{
    return a.first < b.first;
}

int main()
{
    vector<pair<int, string>> v;
    int n;
    string name;
    int age;

    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cin >> age >> name;
        v.push_back({age, name});
    }

    stable_sort(v.begin(), v.end(), compare);

    for (int i = 0; i < n; i++)
    {
        cout << v[i].first << ' ' << v[i].second << '\n';
    }

    return 0;
}