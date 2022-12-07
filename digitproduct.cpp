#include<iostream>
using namespace std;

int main(){
    int n;
    int rem;
    int prod=1;
    cin>>n;
    while (n>0)
    {
        rem=n%10;
        prod=prod*rem;
        n=n/10;
    }
    cout<<"digit products is:"<<prod<<endl;
    

}