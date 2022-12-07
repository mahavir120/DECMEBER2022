#include<iostream>
using namespace std;

void add(int x,int y){
    int sums=x+y;
    cout<<sums<<endl;

}

int main(){
    int x,y;
    cin>>x>>y;
    int sums=0;
    sums=x+y;
    cout<<sums<<endl;

}
template<class T>
void add_data(T x, T y){
    T sums=x+y;
    cout<<sums<<endl;
    
}