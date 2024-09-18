#include<iostream>
using namespace std;

int main() {
int x;
cout << "please input a number" << endl;
cin >> x;
if (x<0) cout <<"Negative" << endl;
else if (x==0) cout << "Zero" << endl;
else if (x>=1) cout << "positive" << endl;
}
