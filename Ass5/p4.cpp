#include<iostream>
using namespace std;



int main () {
    int selection, n1, n2, a1;
cout << "Please choose from one of the calculators functions\n" << "Option 1: Addition\n" << "Option 2: Subtraction\n" << "Option 3: Multiplication\n" << "Option 4: Division\n";
cin >> selection;
switch (selection) {
  case 1:
    cout << "Please input the two numbers you would like to add\n";
        cin >> n1;
        cin >> n2;
        a1=(n1+n2);
            cout << "Your awnser is: " << a1 << endl;

        break;
  case 2:
    cout << "Please input the two numbers you would like to subtract\n";
        cin >> n1;
        cin >> n2;
        a1=(n1-n2);
            cout << "Your awnser is: " << a1 << endl;

        break;
  case 3:
    cout << "Please input the two numbers you would like to multiply\n";
        cin >> n1;
        cin >> n2;
        a1=(n1*n2);
            cout << "Your awnser is: " << a1 << endl;

        break;
  case 4:
    cout << "Please input the two numbers you would like to divide\n";
        cin >> n1;
        cin >> n2;
        a1=(n1/n2);
            cout << "Your awnser is: " << a1 << endl;

        break;

default: cout << "Please try again" << endl;
break;
}
}   