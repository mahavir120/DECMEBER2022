#include<iostream>
using namespace std;

int main(){
    int n;
    int rem;
    int copy;
    cin>>n;
    copy=n;


    int rev=0;
    while(n>0){
        rem=n%10;
        rev=rev*10+rem;
        n=n/10;
    }

    if(copy==rev){
        cout<<"palindrom number:"<<endl;
    }else{
        cout<<"not a palindrom number"<<endl;

    }
}