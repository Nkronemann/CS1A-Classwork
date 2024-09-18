#include<iostream>
using namespace std;

int main() {
int x;
cout << "Please insert the number of a year" << endl;
cin >> x;
if (x%4==0) cout << "This was a leap year" << endl;
else if (!(x%4==0)) cout << "This was just a normal year" << endl;
}