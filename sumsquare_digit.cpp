#include<iostream>
using namespace std;

int main(){
    int n;
    int sum=0;
    int rem;
    cin>>n;
    while(n>0){
        rem=n%10;
        sum=sum+rem*rem;
        n=n/10;
    }
    cout<<"sum squares of digit is:"<<sum<<endl;
    
}