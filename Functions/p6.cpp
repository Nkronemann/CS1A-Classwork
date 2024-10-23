#include <iostream>
using namespace std;

void ctf(double temp) {
double totaltemp=0;
totaltemp=(32+temp)*((double)5/9);
cout << totaltemp << endl;
}
void ftc(double temp) {
double totaltemp=0;
totaltemp=(temp-32)*((double)5/9);
cout << totaltemp << endl;
}
int main() {
string choice;
double input;
cout << "Please input 1 if your trying to translate farienheit to celcius\n";
cout << "Please input 2 if you are trying translate celcius to farienheit\n";
getline (cin, choice);
if (choice=="1") {
cin >> input;
    ftc(input);
}
else if (choice=="2") {
    cin >> input;
     ctf(input);
}
else {cout << "Your a dumbass try again" << endl;}
}
