#include<iostream>

using namespace std;

int main(){

    ios::sync_with_stdio(false);
    cin.tie(0);

    int n, number[1001];
    int sum = 0;

    cin >> n;

    for(int i=0; i<n; i++){
    cin >> number[i];
    }

    for(int i=0; i<n; i++){
cout << number[i] << endl;    }
    
}