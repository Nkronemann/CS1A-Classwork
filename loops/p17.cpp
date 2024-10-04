#include<iostream>
using namespace std;

//Develop a C++ program that uses a for loop to repeatedly ask the user for a number and adds it to a running total. 
//The loop should continue until the user enters 0. After exiting the loop, display the total.

int main() {
int x = 0, total = 0, i;

cout << "Please enter multiple positive or negative numbers\n";

for (i=1;i>0;) {
cin >> x;
total=total+x;
if ( x == 0 ) {
   cout << "The total of all numbers you entered was: " << total << endl;  
   i=0;   
} 
}
}