#include<iostream>
using namespace std;

int main() {
    string text;
    char character;

cout << "Please enter a word\n";
getline (cin, text);

cout << "Enter a character to count:\n";
cin >> character;

int count = 0;

for (char c : text) {
    if (c == character) {
        count++;
    }
}
cout << "The character: " << character << " Appears " << count << " times." << endl;
}
