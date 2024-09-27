#include<iostream>
using namespace std;

int main() {
int sum, i, x;
sum=0;

    cout << "Please input a number, and ill make a multiplication table for you\n";
    cin >> x;

        for (i=1;i<11;i++) {
            sum=x*i;
            cout << x << '*' << i << '=' << sum << endl;
            }
}
