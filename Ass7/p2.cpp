#include <iostream>
using namespace std;

int main() {
    string input;
    char A, Z, a, z;
    int uppercase, lowercase, digits, spaces;
    getline (cin, input);
    uppercase=0; lowercase=0; digits=0; spaces=0;
for (int i=0; i<input.length(); i++) {
    if (input[i]>=65 && input[i]<=90) {
        uppercase++;
    } else if (input[i]>=97 && input[i]<=122) {
        lowercase++;
    } else if (input[i]>=1 && input[i]<=9) {
        digits++;
    } else if (input[i]>=32 && input[i]<=32) {
        spaces++;
    }
}
cout << uppercase << ' ' << lowercase << ' ' << digits << ' ' << spaces << endl;
}