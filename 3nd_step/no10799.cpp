#include<iostream>
#include<string>
#include<stack>

using namespace std;

int main(){
    stack<char> s;
    string input;
    int answer = 0;
    int i = 0;
    
    cin >> input;

    do{
        // cout << i << ": " << "char is " << input[i];
        if(input[i] == '(')
             s.push('(');
        
        else if(input[i] == ')'){
            s.pop();
            if(input[i-1]=='(') answer += s.size();
            else answer++;
            
        }
        i++;
        // cout << " stack size is " << s.size() << '\n';

        // if(s.size()==0) cout << "중간점검: " << answer << "\n\n";
    } while(!(i == input.size()));

    cout << answer << '\n';

    return 0;
}