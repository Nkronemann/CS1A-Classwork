#include<iostream>
using namespace std;

int main() {
    int x, sum, i;
    sum = 0;
    
    cout << "Enter a positive number\n";
    cin >> x;

while (x > 0) {
    int digit = x % 10;

if (digit % 2 != 0) {
    sum += digit;
}
x /= 10;
}
cout <<"The sum of the odd digits is: " << sum << endl;
}
