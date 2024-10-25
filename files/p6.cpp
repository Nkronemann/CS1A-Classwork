#include<iostream>
#include<fstream>
using namespace std;
int main() {
ifstream Myfile ("inp6.txt");;

int charcount = 0;
char ch;

while (Myfile.get(ch)) {
    charcount++;
}
cout << charcount << endl;
}