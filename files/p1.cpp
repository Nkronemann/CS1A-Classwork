#include<iostream>
#include<fstream>
using namespace std;
int main() {
ifstream Myfile ("inp1.txt");
while(!Myfile.eof()) {
    string s;
    getline(Myfile, s);
    cout << s << endl;
}
}
