#include<iostream>
using namespace std;

int main() {
 int num;
 cout << "Enter a number" << endl;
cin >> num;
    int original = num;
    int reversed = 0;

while (num > 0) {
    int digit = num %10;
    reversed = reversed * 10 + digit;
    num /= 10;
}
if (original == reversed) {
    cout << "Is a Palindrome" << endl;
} else {
    cout << "Not a palindrome" << endl;
}
    }