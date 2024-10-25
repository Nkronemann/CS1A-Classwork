#include<iostream>
#include<fstream>
using namespace std;
int main() {
    string text;
ifstream Myfile ("inp5.txt");;
int words;
getline(Myfile, text);
words = 1;
for (int i=text.length();i>=0;i--) {
    if (text[i]==' ') {
        words++;
    }
}
    cout << words << endl;
}