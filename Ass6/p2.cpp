#include<iostream>
using namespace std;

// Problem 2. Absolute Sum: Write a C++ program to receive 6 numbers and print sum of the absolute value of all the numbers.
// Example of absolute value: |5| = 5, |-12| = 12. 

int main () {
int x,i,sum;
cout << "Please input 6 positive or negative numbers and ill tell you the absolute value of them" << endl;
for (i=6;i>0;i--) {

cin >> x;
if (x<0) {
    sum=x*(-1);
    cout << "The aboslute value of this number is:" << sum << endl;
}
else if (x>0) {
    cout << "The aboslute value of this number is:" << sum << endl;
}
}
}   