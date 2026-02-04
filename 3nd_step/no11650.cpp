#include<iostream>
#include<vector>
#include<algorithm>

// 첫 번째 코드  - Vector & 사용자 지정 Compare (X)
using namespace std;

int main(){
    vector<pair<int,int>> v;

    int N;
    cin >> N;

    int x,y;

    for(int i=0; i<N; i++){
        cin >> x >> y;
        v.push_back({x,y});
    }
    sort(v.begin(), v.end());

    for (int i = 0; i < N; i++) {
    cout << v[i].first << ' ' << v[i].second << '\n';
}


    return 0;
}

// 두번째 코드 Vector & 사용자 지정 Compare (O)

/*
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool compare(pair<int, int>a, pair<int, int>b) {
	if (a.first == b.first) {	// x가 같은 경우에만, 
		return a.second < b.second;	// y를 기준으로 오름차순
	}
	else {
		return a.first < b.first;	// x를 기준으로 오름차순
	}
}

int main(){
	int n, x, y;
    	vector<pair<int, int>> v; // 이차원 벡터 선언
	cin >> n;

	for (int i = 0; i < n; i++){
    	cin >> x >> y;
    	// 첫 번째 - 이차원 벡터 입력 방법
    	v.push_back({x, y});
        // 두 번째 - 이차원 벡터 입력 방법
        // v.push_back(make_pair(x, y));
    }
    
	sort(v.begin(), v.end(), compare); // 오름차순
    
	for (int i = 0; i < n; i++) {
		cout << v[i].first << " "<< v[i].second << "\n";
	}
    
    return 0;
}
*/

// 세번째 코드 Array & 사용자 지정 Compare (O)
/*
#include <iostream>
#include <algorithm>
using namespace std;

struct coordinate {		// array 구조체 생성
	int x, y;
};

bool compare(coordinate a, coordinate b) {
	if (a.x == b.x) {
		return a.y < b.y;
	}
	else {
		return a.x < b.x;
	}
}
struct coordinate arr[100001];

int main() {
	int n, x, y;
	cin >> n;

	for (int i = 0; i < n; i++) {
		cin >> arr[i].x >> arr[i].y;
	}

	sort(arr, arr+ n, compare);


	for (int i = 0; i < n; i++) {
		cout << arr[i].x << " " << arr[i].y << "\n";
	}

	return 0;
}
*/