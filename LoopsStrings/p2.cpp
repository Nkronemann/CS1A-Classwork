#include<iostream>
using namespace std;

int main() {

    string text;
    char character, chartwo;
cout << "Please enter a word\n";
getline (cin, text);

cout << "Enter a character to switch:\n";
cin >> character;


cout << "Enter a character to replace the previous with:\n";
cin >> chartwo;

for (char &c :  text) {
    if (c == character) {
        c = chartwo;
    }
}
cout << text << endl;
}
