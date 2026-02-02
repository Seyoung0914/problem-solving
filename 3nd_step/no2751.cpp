#include<iostream>

using namespace std;

int main(){

    int n, temp;

    cin >> n;

    int list[n];

    for(int i=0; i<n; i++){
        cin >> list[i];
    }

    // 정렬 시작
    for(int i=0; i<n-1; i++){
        for(int j=0; j<n-1-i; j++){
            // swap
            if(list[j+1]<list[j]){
                temp = list[j];
                list[j] = list[j+1];
                list[j+1] = temp;
            }
        }
    }

    for(int i=0; i<n; i++){
        cout << list[i] << " ";
    }
    cout << endl;
    
    return 0;
}