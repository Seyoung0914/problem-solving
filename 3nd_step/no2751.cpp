#include<iostream>

using namespace std;

#define MAX 1000000

void mergee(int arr[], int temp[], int start, int mid, int end);

void mergesort(int arr[], int temp[], int start, int end){
    if(start<end){
        int mid = (start+end)/2;
        mergesort(arr, temp, start, mid);
        mergesort(arr, temp, mid+1, end);
        mergee(arr, temp, start, mid, end);
    }
}

void mergee(int arr[], int temp[], int start, int mid, int end){
    for(int i=start; i<=end; i++){
        temp[i] = arr[i];
    }
    int start1 = start;
    int start2 = mid+1;
    int index = start;
    while(start1<=mid&&start2<=end){
        if(temp[start1]<=temp[start2]){
            arr[index] = temp[start1];
            start1++;
        }
        else{
            arr[index] = temp[start2];
            start2++;
        }
        index ++;
    }
    for(int i=0; i<= mid - start1; i++){
        arr[index+i] = temp[start1+i];
    }
}


int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int arr[MAX], temp[MAX], n;

    cin >> n;

    for(int i=0; i<n; i++){
        cin >> arr[i];
    }

    mergesort(arr, temp, 0, n-1);

    for(int i=0; i<n; i++){
        cout<< arr[i] << '\n';
    }

    return 0;
}