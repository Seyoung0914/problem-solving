#include <string>
#include <vector>
#include <map>
#include <sstream>


using namespace std;

vector<string> split(string s, char delimiter)
{
    vector<string> result;
    string token;

    stringstream ss(s);

    while(getline(ss, token, delimiter))
    {
        result.push_back(token);
    }

    return result;
}

vector<int> solution(string today, vector<string> terms, vector<string> privacies) {
    
    vector<int> answer;
    map<string, int> term;
    
    // 문자열 파싱
    vector<string> result = split(today, '.');
    int today_count = 336*stoi(result[0]) + 28*stoi(result[1]) + stoi(result[2]);
    
    // terms 
    for(int i=0; i<terms.size(); i++){
        result = split(terms[i], ' ');
        term[result[0]] = stoi(result[1]);
    }
    
    // privacies 
    for(int i=0; i<privacies.size(); i++){
        result = split(privacies[i],' ');
        string privacy_day = result[0];
        string privacy_term_key = result[1];
        
        result = split(privacy_day, '.');
        int privacy_day_count = 336*stoi(result[0]) + 28*stoi(result[1]) + stoi(result[2]);
        int term_day = term[privacy_term_key]*28;
        
        if(today_count>=term_day+privacy_day_count) answer.push_back(i+1);
    }
    
    
    return answer;
}