#include<iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter size: ";
    cin >> n;

    for(int i = 0; i < n; i++) {
        // spaces before stars
        for(int j = 0; j < i; j++) {
            cout << " ";
        }

        // stars
        for(int j = 0; j < 2*n-(2*i+1); j++) {
            cout << "*";
        }

        // no need for trailing spaces after stars in most pyramid patterns
        cout << endl;
    }

    return 0;
}