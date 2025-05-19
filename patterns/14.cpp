#include <iostream>
using namespace std;

int main() {
    // Prompt the user for the size of the pattern
int n;
    cout<<"Enter size: ";  // Added colon for better formatting
    cin>>n;

    for(int i=1;i<=n;i++){
        for (int j=1;j<=n;j++){
            if(i==1 || i==n || j==1 || j==n){
                cout<<"*";
            }
            else{
                cout<<" ";
            }
            
        }
       cout<< endl;
        
    }
}
