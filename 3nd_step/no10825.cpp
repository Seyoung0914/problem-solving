#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

using namespace std;

struct subject
{
    string name;
    int korean;
    int english;
    int math;
};

bool compare(const subject &a, const subject &b)
{
    if (a.korean == b.korean)
    {
        if (a.english == b.english)
        {
            if (a.math == b.math)
                return a.name < b.name;
            return a.math > b.math;
        }
        return a.english < b.english;
    }
    return a.korean > b.korean;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    subject person[100000];
    int n;

    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cin >> person[i].name >> person[i].korean >> person[i].english >> person[i].math;
    }
    sort(person, person + n, compare);

    for (int i = 0; i < n; i++)
    {
        cout << person[i].name << '\n';
    }

    return 0;
}