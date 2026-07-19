using namespace std;

long long solution(int price, int money, int count)
{
    long long answer = 0;
    long long sum = (long long)price*count*(count+1)/2;
    answer = (-1)*(money-sum);
        
    if((money-sum)>=0) return 0;
    return answer;
}