#include<iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter number of rows: ";
    cin >> n;
    
    cout << "\n=== Star Pyramid ===" << endl;
    for(int i = 1; i <= n; i++) {
        for(int j = 1; j <= n-i; j++) cout << " "; // spaces
        for(int k = 1; k <= 2*i-1; k++) cout << "*"; // stars
        cout << endl;
    }
    return 0;
}
