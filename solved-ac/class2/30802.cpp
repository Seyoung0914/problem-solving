#include<iostream>

using namespace std;

int main(){
    int t_shirt[6];
    int T, P;
    int people;
    int sum=0;

    cin>>people;

    for(int i=0; i<6; i++) cin>>t_shirt[i];
    
    cin>>T>>P;

    for(int i=0; i<6; i++){
        if(t_shirt[i] % T==0) sum += t_shirt[i]/T;
        else sum += t_shirt[i]/T+1;
    }
    
    
    cout<<sum<<endl;
    cout<<people/P<<" "<<people%P<<endl;
}