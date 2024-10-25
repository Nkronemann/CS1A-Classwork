#include<iostream>
#include<fstream>
using namespace std;
int main() {
string s;
ofstream Myfile("inp2.txt");
Myfile << "Hi There! Please type something.";
Myfile.close();
}
