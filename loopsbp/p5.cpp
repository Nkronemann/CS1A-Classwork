#include<iostream>
using namespace std;

// armstrong 153= 1^3 + 5^3 + 3^3
int main() {
  int number, on = 0, rem = 0, sum = 0;

    cout << "Enter a positive intiger\n";
    cin >> number;

    on = number;

    while (number != 0) {
      rem = number % 10;
      sum += (rem, 3);
      number /= 10;
    }
    if (sum == on) {
      cout << on << " is an Armstrong number" << endl;
    } else {
      cout << on << " is not an Armstrong number" << endl;
    }
    }