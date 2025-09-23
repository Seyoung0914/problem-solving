#include<iostream>

using namespace std;

int sum(int A, int B){
	return A+B;
}

int main(){
	int a, b;

	cin >> a >> b;

	cout << sum(a,b) <<endl;

	return 0;
}
