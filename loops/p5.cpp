#include<iostream>
using namespace std;

int main() {
    int i, x, sum; 
    sum=0;
    for (i=1;i<50;i++) {
        if (i%2==0) {
            sum=i+sum;
            cout << sum << endl;
        }
}
}