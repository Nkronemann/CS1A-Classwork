#include<iostream>
using namespace std;

int main() {
    int x;
cout <<"Please input your age" << endl;
cin >> x;
if (x<=12) cout << "Child" << endl;
else if (x>=13 and x<=19) cout << "Teenager" << endl;
else if (x>=20 and x<=64) cout << "Adult" << endl;
else if (x>=65) cout << "Senior" << endl;
}
