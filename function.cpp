#include<iostream>
using namespace std;


int add(int a,int b){
    return a+b;

}
int main(){
    int a,b,c;
    cin>>a>>b;
    c=add( a, b);
    cout<<c<<endl;
}