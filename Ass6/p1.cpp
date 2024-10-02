#include<iostream>
using namespace std;

// Problem 1. More Divisible by 3 or 5: Write a C++ program to receive 20 number from the user and tell us if there are more numbers in the 
// 20 numbers that are divisible by 3 or there more that are divisible by 5.

int main () {
        int x, i, total, divt, divf;
        divt=0; divf=0;
for (i=20;i>0;i--) {
    cin >> x;
    if (x%3==0) {

divt= divt+1;

    }
    else if (x%5==0) {

divf= divf+1;

    }
}
    cout << "The amount of numbers divisible by 3 was: " << divt << endl;
    cout << "The amount of numbers divisible by 5 was: " << divf << endl;
}   