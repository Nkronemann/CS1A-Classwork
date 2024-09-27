#include<iostream>
using namespace std;

int main() {
int sum, i;
sum=0;
for (i=1;i<100;i++) {
    if (i%3==0) {
sum=i+sum;
    } else if (i%5==0) {
sum=i+sum;
    }
    cout << sum << endl;
}
}