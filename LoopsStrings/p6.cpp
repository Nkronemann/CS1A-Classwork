#include<iostream>
using namespace std;

int main() {
string text, nameone, nametwo;
getline(cin, text);

for (int i=text.length();i>=0;i--) {
    if (text[i]=' ') {
        text[text.length()>i]= nameone;
    }
    }
}

}