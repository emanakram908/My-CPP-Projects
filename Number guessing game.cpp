#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;

int main() {
    srand(time(0)); // random number ke liye
    int secret = rand() % 100 + 1;
    int guess, attempts = 0; // attempts count karne ke liye
    
    cout << "=== Guess the Number Game ===" << endl;
    cout << "I have chosen a number between 1 to 100" << endl;
    
    do {
        cout << "Enter your guess: ";
        cin >> guess;
        attempts++; // har guess pe +1
        
        if(guess > secret) cout << "Too High! Try again\n";
        else if(guess < secret) cout << "Too Low! Try again\n";
        else cout << "Congratulations! You guessed it in " << attempts << " attempts!" << endl;
        
    } while(guess != secret);
    
    return 0;
}
