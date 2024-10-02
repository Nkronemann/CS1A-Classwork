#include<iostream>
using namespace std;

int main() {
 int i, sum;
 cin >> i;
 sum=i;
 i--;
 for (i; i>=1;--i) {
sum= sum * i;
cout << sum << endl;
 }
}
