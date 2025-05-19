#include <iostream>
using namespace std;

void pattern(int n)
{
    for(int i = 1; i <= 2 * n - 1; i++) {

        // number of stars on each side
        int stars = (i <= n) ? i : 2 * n - i;

        // number of spaces in the middle
        int spaces = 2 * (n - stars);

        // print left stars
        for(int j = 1; j <= stars; j++) {
            cout << "*";
        }

        // print middle spaces
        for(int j = 1; j <= spaces; j++) {
            cout << " ";
        }

        // print right stars
        for(int j = 1; j <= stars; j++) {
            cout << "*";
        }

        cout << endl;
    }
}

int main()
{
    int N = 5;
    pattern(N);
    return 0;
}