#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter size: ";  // Added colon for better formatting
    cin>>n;
    int a[n];  // Moved array declaration after getting size
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
    
    return 0;
}
