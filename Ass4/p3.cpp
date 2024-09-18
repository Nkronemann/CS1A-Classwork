#include<iostream>
using namespace std;

int main() {
int a, Monday, Tuesday, Wensday, Thursday, Friday, Saturday, Sunday;
cout << "Please enter a day of the week and ill tell you if its a weekday or weekend" << endl;
cin >> a;
if (a==Monday or a==Tuesday or a==Wensday or a==Thursday or a==Friday){

cout << "Weekday" << endl;
} else if (a==Saturday or a==Sunday){
 cout << "Weekend" << endl;
}
}
