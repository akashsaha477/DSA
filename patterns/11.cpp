#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter size: ";  
    cin>>n;
    int fn=2*(n-1);
    //first number
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout<<j;
        }
    //space
        for(int j=1;j<=fn;j++){
            cout<<" ";
        }
        fn=fn-2;
        //second number
        for(int j=i;j>=1;j--){
            cout<<j;
        }
        
    cout<<endl;
        
}
return 0;
}