#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    vector<long long> number;
    long long input;
    int n, k;

    cin >> n >> k;

    for(int i=0; i<n; i++){
        cin >> input;
        number.push_back(input);
    }

    nth_element(number.begin(), number.begin()+k-1, number.end());
    cout << number[k-1] << '\n';

    return 0;
}