#include<iostream>
using namespace std;


int main() {
   int ang1, ang2, ang3;
   {
    cin >> ang1;
    cin >> ang2;
    cin >> ang3;
   }
 if (ang1==90 or ang2==90 or ang3==90) cout << "its a right triangle" << endl;
 else if (ang1<90 and ang2<90 and ang3<90) cout <<"This is an accute triangle" << endl;
 else if (ang1>90 or ang2>90 or ang3>90) cout <<"This is an obtuse triangle" << endl;

}