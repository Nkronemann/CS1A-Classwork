#include<iostream>
using namespace std;
int main() {
    int x;
    string s, w1, w2;
cin >> x;
if (x==1) {
s = "Hello World";
s[2] = 'p';
cout << s << endl;
} else if (x==2) {
w1 = "abc";
w2 = "d";
s = w1 + w2; 
cout << s << endl;
} else if (x==3) {
    string areacode = "(123)-456-";
    string last4 = "7890";
    string phonenumber = areacode + last4;
    cout << phonenumber << endl;
}
}
