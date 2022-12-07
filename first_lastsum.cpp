#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int lastdigit=n%10;
    while(n>1){
        n=n/10;


    }
    cout<<"sum of last and first digit is:"<<lastdigit+n<<endl;
}