#include<iostream>
using namespace std;

// Problem 3. Sum of All Positive Numbers: Write a C++ program that receives 5 numbers and prints out sum of all numbers that are positive.
// For example if the input numbers are 5, 2, -9, 6, -11, the output should be 13. 

int main () {
int x, i, sum;
    sum=0;
    cout << "Please input 5 numbers and I will give you the sum of the positive ones\n";
for (i=5; i>0; i--) {
    cin >> x;
if (x>=0) {
    sum=x+sum;
}
}
    cout << sum << endl;
}