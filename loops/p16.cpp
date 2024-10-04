#include<iostream>
using namespace std;

//Create a C++ program that uses a for loop to repeatedly ask the user for a positive integer until they enter a negative number. 
//Keep track of how many positive integers were entered and display that count at the end.

int main() {
int positive = 0, negative = 0, x = 1;

cout << "Please enter multiple positive numbers\n";

for (;x > 0;) {
cin >> x;
if ( x > 0 ) {
        positive++;
} else if ( x < 0) {
        cout << "You entered: " << positive << " positive numbers until you entered an negative\n";
}
}
}