#include<iostream>
using namespace std;
int main() {
string w1;
    cout << "Please input a word\n";
        getline (cin, w1);  
w1[0] = 'S';
w1[w1.length()-1] ='S';   
cout << w1 << endl;
}
