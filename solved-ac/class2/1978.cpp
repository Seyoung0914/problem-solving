#include<iostream>

using namespace std;

int main(){

    ios::sync_with_stdio(false);
    cin.tie(0);

    int n, number;
    int sum = 0, count;

    cin >> n;

    for(int i=1; i<=n; i++){
        count = 0;

        cin >> number;

        for(int div=1; div<=number; div++){
            if(number%div == 0) count ++;
        }

        if(count  == 2) sum ++;
    }
    cout << sum << endl;
}