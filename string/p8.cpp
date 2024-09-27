#include<iostream>
using namespace std;

int main() {
    string text;
        cout <<"Please input a line of text\n";
        getline (cin, text);
    text[0]='s';
    text[text.length()/2]='s';
    text[text.length()-1]='s';
    cout << text << endl;
}
