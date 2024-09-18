#include<iostream>
using namespace std;

//Ask the user to input their age. Determine and print the ticket price based on the age:
//- Children (age 0-12): $5
//- Teens (age 13-18): $8
//- Adults (age 19-64): $12
//- Seniors (age 65 and above): $6
int main() {
int age;
cout << "please input your age and ill help you find the price for your movie ticket" << endl;
cin >> age;
if (age<=12) cout << "The price for your ticket will be $5" << endl;
else if (age<=18) cout << "The price for your ticket will be $8" << endl;
else if (age<=64) cout << "The price for your ticket will be $12" << endl;
else if (age>=65) cout << "The price for your ticket will be $6" << endl;

}