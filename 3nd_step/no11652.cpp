#include<iostream>
#include<map>
#include<algorithm>
#include<vector>

using namespace std;



/*
// map 이용
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
    */
// 1. map 이용, 2. sort 이용

// 2. sort 이용
int main(){

    vector<long long> card;
    long long input;
    int n;

    cin >> n;

    for(int i=0; i<n; i++){
        cin >> input;
        card.push_back(input);
    }

    sort(card.begin(), card.end());

    int start = 0, max = 1, count;
    long long answer = card[0];

    for(int i=0; i<n; i++){
        // cout << card[i] << " ";
        if(card[start]!=card[i]){
            count = i - start;
            if(max < count){
                max = count;
                answer = card[start];
            }
            else if(max == count) {
                if(card[start]<answer) answer = card[start];
            }
            start = i;
        }
    }
    count = n - start;
    if(max < count){
        max = count;
        answer = card[start];
    }

    cout << answer << '\n';

    return 0;
}

// 3. 2번 보안판인데 이게 더 나은듯
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int N; 
    cin >> N;
    vector<long long> number;
    int cnt = 1, max = 1;
    long long ans;
 
    for (int i = 0; i < N; i++) {
        long long num;
        cin >> num;
        number.push_back(num);
    }
    sort(number.begin(),number.end());
    ans = number[0];
    for (int i = 1; i < N; i++) {
        if (number[i] == number[i-1]) {
            cnt++;
            if (max < cnt) {
                max = cnt;
                ans = number[i];
            }
        }
        else cnt = 1;
    }
    cout << ans;
 
}