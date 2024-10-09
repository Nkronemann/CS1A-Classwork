#include<iostream>
using namespace std;

int main() {
string text;
int words;
getline(cin, text);
words = 0;
for (int i=text.length();i>=0;i--) {
    if (text[i]==' ') {
        words++;
    }
}
cout << "The amount of words you gave me is:" << words << endl;
}