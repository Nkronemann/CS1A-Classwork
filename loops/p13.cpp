#include<iostream>
using namespace std;

int main() {
string selection2;
int n1, n2, a1, wa1, selection;
for (wa1=1; wa1>0;) {
cout << "Please choose from one of the calculators functions\n" << "Option 1: Addition\n" << "Option 2: Subtraction\n" << "Option 3: Multiplication\n" << "Option 4: Division\n";
cin >> selection;
switch (selection) {
  case 1:
    cout << "Please input the two numbers you would like to add\n";
        cin >> n1;
        cin >> n2;
        a1=(n1+n2);
            cout << "Your awnser is: " << a1 << endl;

cout << "Would you like to calculate something else?" << endl;
cin >> selection2;
if (selection2=="no") {
        wa1=0;
}


        break;
  case 2:
    cout << "Please input the two numbers you would like to subtract\n";
        cin >> n1;
        cin >> n2;
        a1=(n1-n2);
            cout << "Your awnser is: " << a1 << endl;

cout << "Would you like to calculate something else?" << endl;
cin >> selection2;
if (selection2=="no") {
        wa1=0;
}


        break;
  case 3:
    cout << "Please input the two numbers you would like to multiply\n";
        cin >> n1;
        cin >> n2;
        a1=(n1*n2);
            cout << "Your awnser is: " << a1 << endl;

cout << "Would you like to calculate something else?" << endl;
cin >> selection2;
if (selection2=="no") {
        wa1=0;
}


        break;
  case 4:
    cout << "Please input the two numbers you would like to divide\n";
        cin >> n1;
        cin >> n2;
        a1=(n1/n2);
            cout << "Your awnser is: " << a1 << endl;

cout << "Would you like to calculate something else?" << endl;
cin >> selection2;
if (selection2=="no") {
        wa1=0;
}


        break;

default: cout << "Please try again" << endl;
break;

}
}
}
