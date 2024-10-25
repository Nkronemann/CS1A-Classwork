#include<iostream>
#include<fstream>
using namespace std;
int main() {
        string s, copy;
ifstream Myfile ("inp1.txt");
while(!Myfile.eof()) {
    string s;
    getline(Myfile, s);
copy=s;
Myfile.close();
}
ofstream Filetwo("inp3.txt");
Filetwo << copy;
Filetwo.close();
cout << copy << endl;
}