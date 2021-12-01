// Assignment 0: Pearl Anyanwu
// This program prints out as many asterisks as the user wants.

#include <iostream>
using namespace std; int main()
{
    int count; // declares the variable count to be an integer.
    char goAgain = 'y'; // declares the variable goAgain to be a character. 'y'=(yes)
    
    while (goAgain != 'n') { // program will execute as long as goAgain variable is not 'n'=(no)
        cout << "How many asterisks?: "; // outputs question onto console.
        cin >> count; // user inputs an integer number. this is the number of asterisks intended to be printed.
        for (int i = 0; i < count; i++) {
            cout << "*"; // prints one asterisk onto the console.
        }
        cout << endl; // skips a line.
        cout << "Go again? (y/n): "; // prints "go again?" (if 'y', the program restarts. if 'n', the program ends.)
        cin >> goAgain;
    }
}
