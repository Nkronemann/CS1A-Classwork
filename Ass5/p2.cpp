#include<iostream>
using namespace std;



int main () {
    int number;
cin >> number;
    if (number > 0) {
        cout << "The number is positive\n";
    } else if (number < 0) {
        cout << "The number is negative\n";
    } else {
        cout << "The number is zero.\n";
    }


    if (number != 0) {

        if (number % 2 == 0) {

            cout << "and even.\n";
        } else {
            cout << "and odd.\n";
        } 

    }
    return 0;
}