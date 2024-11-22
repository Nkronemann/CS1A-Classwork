#include<iostream>
#include<fstream>

using namespace std;

int main(){
    bool followsforumla = false;
    bool plus = false;
    bool parenthesiso = false;
    bool parenthesisc = false;
    bool dash = false;
    bool length = false;
    string usernumber;
    cin >> usernumber;

    for (int i = 0; i < usernumber.length(); i++) {
        if (usernumber[0]=='+') {
            plus = true;
        }
        if (usernumber[2]=='(') {
            parenthesiso = true;
        }
        if (usernumber[6]==')') {
            parenthesisc = true;
        }
        if (usernumber[10]=='-') {
            dash = true;
        }
        if (usernumber.length()==15) {
            length = true;
        }
    }
    if (plus == true and parenthesiso == true and parenthesisc == true and dash == true and length == true) {
        followsforumla = true;
        cout << "Follows Formula" << endl;
    } else {
        cout << "Enter a actual fucking phone number please\n";
    }
}