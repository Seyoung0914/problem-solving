#include<iostream>
#include<string>
#include<algorithm>
#include<vector>
#include<string>
using namespace std;

/*
1. 괄호가 닫히면 반두시 그만큼의 괄호가 닫혀야 한다.
    1) 닫힌 괄호와 열린 괄호의 개수를 변수로 기록한다.
        열린괄호는 ++, 닫힌 괄호는 --
        마지막에 그 변수의 값은 반드시 0이 되어야 한다.
2. 반드시5 열린 괄호로 사작해서 닫힌 괄호로 끝나야 한다.
    1) 맨 처음과 마지막에 char값을 확인한다.
        맨 처음에는 열린괄호인지
        마지막에는 닫힌괄호인지
    
*/

int main()
{
    int num = 0;
    int n;
    string input;
    bool answer=true;

    cin >> n;
    
    for(int i=0; i<n; i++){
        int j =0;
        while(input!="\n"){
            getline(input, 10, stdin);
            cout << input << '\n';
            if(j==0&&input==")") answer = false; 
            else if(input=="(") num ++;
            else if(input==")") num --;
        }
        if(input=="(") answer = false;
        if(num!=0||!answer) cout << "no\n";
        else cout <<"yes\n";
    }
    
    return 0;
}