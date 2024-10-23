#include<iostream>
using namespace std;

int main() {
int input, x=0, last=0, total=0;

cin >> input;
while (input > 1) {
    last=input-1;
total=input*last*total;
input--;
cout << input << endl;
cout << last << endl;
cout << total << endl;
}
cout << total << endl;
}