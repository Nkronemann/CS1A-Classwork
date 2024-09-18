#include<iostream>
using namespace std;

int main() {
int x, y;
cout << "Please input one x and one y coordinate on a graph and ill tell you which quadrant its in" << endl;
cin >> x;
cin >> y;
if (x>0 and y>0) cout << "Top Right Quadrant" << endl;
else if (x>0 and y<0) cout << "Bottom Right Quadrant" << endl;
else if (x<0 and y<0) cout << "Bottom Left Quadrant" << endl;
else if (x<0 and y>0) cout << "Top Left Quadrant" << endl;
else if (x==0 and y==0) cout << "No Quadrant" << endl;
}