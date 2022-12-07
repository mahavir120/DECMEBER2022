#include<iostream>
using namespace std;

class Fcatorail{
    public:
        int data;

    Fcatorail(int v) {
        data=v;
    }   

    int fact(int n){
        n=data;
        int factdata=1;
        if(n==0){
            return 1;
        }
            for(int i=1;i<=n;i++){
                factdata=factdata*i;
            }
        return factdata;
    }

};
int main(){
    Fcatorail f(5);
  int v= f.fact(5);
  cout<<v<<endl;



}