#include<iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter size: ";
    cin >> n;

    for(int i = 0; i <=2*n-1; i++) {
        int star=i;
        if(i>n){
            star=2*n-i;
        }
        for(int j = 0; j < star; j++) {
            cout << "*";
        }
        cout << endl;
        
    }

    return 0;
}