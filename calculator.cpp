#include<iostream>
using namespace std;

// Function
int add(int a, int b) {
    return a + b;  
}

int main() {
    int x, y;
    cout << "Enter 2 numbers: ";
    cin >> x >> y;
    
    cout << "Sum = " << add(x, y) << endl;
    cout << "Product = " << x * y << endl;
    
    return 0;
}
