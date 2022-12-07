#include<iostream>
using namespace std;

void addDigit(int n){
    int digitsum=0;
    while(n>0){
        int rem=n%10;
        digitsum=digitsum+rem;
        n=n/10;

    }
    cout<<digitsum<<endl;
}

int main(){
    addDigit(12345);
}