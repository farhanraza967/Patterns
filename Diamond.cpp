#include<iostream>
using namespace std;
int main(){
int n;
    cout << "Enter the number of rows for the diamond: ";
    cin >> n;
    // Upper part of the diamond
    for (int i=1; i<=n; i++) {
        for (int j=1; j<=n-i; j++) {
            cout << " "; 
        }
        for (int j=1; j<=2*i-1; j++) {
            cout << "*"; 
        }
        cout << endl;
    }
    // Lower part of the diamond
    for (int i=n-1; i>=1; i--) {
        for (int j=1; j<=n-i; j++) {
            cout << " "; 
        }
        for (int j=1; j<=2*i-1; j++) {
            cout << "*"; 
        }
        cout << endl;
    }
}
