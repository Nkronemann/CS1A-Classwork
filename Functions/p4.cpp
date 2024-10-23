#include <iostream>
using namespace std;

double calculatearea (double length, double width) {
    double area=0;
area=length*width;
cout << area << endl;
return calculatearea(length,width);
}
int main() {
    double length, width, area=0;
cout << "Input two numbers to find your length and width\n";
cin >> length;
cin >> width;
return calculatearea(length,width);
}