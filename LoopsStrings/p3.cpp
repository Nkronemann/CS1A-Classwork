#include<iostream>
using namespace std;

int main() {
string text;
   cout << "Please input a word\n";
   cin >> text;

   int len= text.length();
    for (int i=len;i>=0; i--) {
        cout << text[i];
    }
cout << endl;
}
