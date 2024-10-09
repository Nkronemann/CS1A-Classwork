#include<iostream>
using namespace std;

int main() {
    bool palindrome=true;
    string s;
    cin >> s;
    for(int i =0, j = s.length() - 1; i<j; i++, j--) {
        if (s[i]!=s[j]) {
            palindrome=false;
            break;
        }
    }
if (palindrome) {
    cout << "The string is a palindrome!\n";
} else {
    cout << "The string is NOT a palindrome\n";
}
}