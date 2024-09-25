#include<iostream>
using namespace std;

int main() {
    int numgrade;
    cout << "To find out your letter grade what is your numerical grade?" << endl;
    cin >> numgrade;
    int gr = numgrade / 10;
    switch (gr){
    case 9: 
     case 10:
    cout << "You got an A" << endl; break;
    case 8 : cout << "You got an B" << endl;  break;
    case 7 : cout << "You got an C" << endl;  break;
    case 6 : cout << "You got a D" << endl;  break; 

    case 5 :
    case 4 :
    case 3 : 
    case 2 : 
    case 1 : 
    case 0 :
cout << "You got an F" << endl;
    }
}
