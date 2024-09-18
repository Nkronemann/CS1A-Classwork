#include<iostream>
using namespace std;

int main() {
int x, y ,z;
cout << "please enter 3 numbers" << endl;
cin >> x;
cin >> y;
cin >> z;
if (x>y and x>z) cout << x << "  Is the largest number" << endl;
else if (y>x and y>z) cout << y << "  Is the largest number" << endl;
else if (z>x and z>y) cout << z << "  Is the largest number" << endl;
}
