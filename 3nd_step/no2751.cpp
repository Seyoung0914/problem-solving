#include<iostream>

using namespace std;

void mergeee(int arr[], int tmp[], int start, int mid, int end);
void mergesort(int arr[], int tmp[], int start, int end){
    if(start < end){
        int mid = (start+end)/2;
        mergesort(arr, tmp, start, mid);
        mergesort(arr, tmp, mid+1, end);
        mergeee(arr, tmp, start, mid, end);
    }
    
}
void mergeee(int arr[], int tmp[], int start, int mid, int end){
    // tmp에 복사해줌
    for(int i=start; i<=end; i++){
        tmp[i] = arr[i];
    }

    int start1 = start;
    int start2 = mid+1;
    int index = start;

    while(start1<=mid && start2<=end){
        if(tmp[start1]<tmp[start2]){
            arr[index] = tmp[start1];
            start1++;
        }
        else{
            arr[index] = tmp[start2];
            start2++;
        }
        index++;
    }
    for(int i=0; i<= mid-start1; i++){
        arr[index+i] = tmp[start1+i];
    }
}

int main(){

    int n, temp;

    cin >> n;

    int arr[n], tmp[n];

    for(int i=0; i<n; i++) cin >> arr[i];

    mergesort(arr, tmp, 0, n-1);

    for(int i=0; i<n; i++){
        cout << arr[i] << " ";
    }
    cout << endl;

}