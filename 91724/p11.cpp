#include<iostream>
using namespace std;

int main() {
int x;
cout << "Please insert a number of sides and we'll take you what shape it is" << endl;
cin >> x;
if (x<=2) cout << "This is a line anyone can figure that out" << endl;
else if (x==3) cout << "Thats a Triangle" << endl;
else if (x==4) cout << "This is a quadrilateral also known as a square" << endl;
else if (x==5) cout << "Thats a pentagon" << endl;
else if (x==6) cout << "Thats a hexagon" << endl;
}