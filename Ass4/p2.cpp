#include<iostream>
using namespace std;

int main() {
float x, y, z;
cout << "How many units of electricity do you use" << endl;
cin >> x;
if (x<=100) {
    y=x*0.12;
    cout << "This is how much it will cost you:   "<< y << endl;
} else if (x>=100) {
z=x-100;
y=12+(z*.15);
cout << "This is how much it will cost you:    " << y << endl;
}
}
