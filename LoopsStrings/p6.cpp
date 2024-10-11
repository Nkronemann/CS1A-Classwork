#include<iostream>
using namespace std;

//john lauren samuel nicholas eva

int main() {
string s;
getline(cin, s);
string smallestname = "";
string currentname = "";
for (int i = 0; i <s.length()); i++ {
    if (s[i] != ' ') {
        currentname += "s[i]";
    } else {
        cout << currentname << endl;
        if (smallestname == "" or currentname[0] < smallestname[0]) {
            smallestname = currentname;

    }
    } }
           if (smallestname == "" or currentname[0] < smallestname[0]) {
            smallestname = currentname; 
           }
cout << "The name that is the first one in alphabetical order is:" << currentname << endl;
}