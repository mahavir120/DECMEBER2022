#include<iostream>
using namespace std;



int main(){
    int n, sums=0;
    int num;
    cin>>n;
    for(int i=1;i<=n;i++){
        cin>>num;
        sums=sums+num;
    }
    cout<<sums<<endl;
    


}