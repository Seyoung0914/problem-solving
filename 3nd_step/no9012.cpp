#include<iostream>
#include<string>
#include<stack>
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
3. 반드시 닫힌괄호가 열린괄호보다 적어야 한다.
    만약 더 많다면 즉시 종료한다.
    
*/

// 1. 원래 내 방법
int main()
{
    string input;
    int cnt, n;
    bool is_vps;

    cin >> n;

    for(int i=0; i<n; i++){
        cin >> input;
        cnt = 0;
        is_vps = true;
        for(int j=0; j<input.length(); j++){
            if(input[j]=='(') cnt ++;
            else
            {
                cnt --;
                if(cnt<0){
                    is_vps = false;
                    break;
                }
            }
        }
        if(cnt!=0) is_vps = false;
        cout << (is_vps? "YES\n" : "NO\n");
    }
    return 0;
}

// 2. stack을 이용한 방법

int main(){
    int i, j;
    int n;
    cin >> n;
    for(i=0; i<n; i++){
        string vps;
        stack<char> ps;
        cin >> vps;

        for(j=0; j<vps.size(); j++){
            if(vps.at(j)=='(') ps.push('(');
            else {
                if(ps.empty()) break;
                ps.pop();
            }
        }

        if(j == vps.size() && ps.empty()) cout << "YES\n";
        else cout << "NO\n";
    }

    return 0;
}