#include<iostream>
#include<map>

using namespace std;

int main(){
    int n;
    map<long long, int> card;
    long long input;

    cin>>n;
    for(int i=0; i<n; i++){
        cin >> input;
        card[input]++;
    }

    long long answer, max = 1;
    map<long long, int>::iterator i;
    
    for(i=card.begin(); i!=card.end(); i++){
        if(max<i->second){
            max = i->second;
            answer = i->first;
        }
        else if(max == i->second){
            if(i->first<answer) answer = i->first;
        }
    }

    cout << answer;

    return 0;
}
// 1. map 이용, 2. sort 이용