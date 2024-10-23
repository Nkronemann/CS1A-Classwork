#include<iostream>
using namespace std;

bool isPalindrome(string s) {
    int i = 0;
    int j = s.length() - 1;
    while (i < j) {
        if (s[i] != s[j]) {
            return false;
        }
        i++;
        j--;
    }
}
int main() {
    for (int i = 0; i < 3; i++) {
        cout << "enter a string: " << endl;
        string str;
        getline (cin, str);
        bool isPal = isPalindrome(str);
        if (isPal) {
            cout << "The string is a palindrome!\n";
        }else {
            cout << "The string is not a Palindrome\n";
        }
    }
}