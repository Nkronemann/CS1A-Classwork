#include<iostream>
#include<fstream>
using namespace std;
int main() {
ifstream Myfile ("inp4.txt");
int count = 0;

while (!Myfile.eof()){
    string s;
    getline(Myfile,s);
    count++;
}
cout << count << endl;
}