#include<iostream>
using namespace std;



// iterative way;
void n_sum(int n){
    int sums=0;
    for( int i=0;i<=n;i++){
        sums=sums+i;
    }
    cout<<sums<<endl;
}

// recursive
int sums=0;
int nn_sum(int n){
    
  if(n!=0){
    return n+nn_sum(n-1);
  }

}

int main(){
    n_sum(10);

}