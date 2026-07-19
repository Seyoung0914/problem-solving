#include <string>
#include <iostream>
using namespace std;

bool solution(string s)
{
    int countp = 0, county = 0;
    bool answer = true;
    
    for(int i=0; i<s.length(); i++){
        if(tolower(s[i])=='p') countp ++;
        else if(tolower(s[i])=='y') county ++;
    }

    if(countp!=county) answer = false;

    return answer;
}