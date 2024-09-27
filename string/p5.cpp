#include<iostream>
using namespace std;

int main() {
    string w1;
        cout << "Please input a word\n";
            getline (cin, w1);      
             cout << "The first letter of your input was: " << w1[0] << endl;
             cout << "The second letter of your input was: "<< w1[1] << endl;
             cout << "The final letter of your input was:" << w1[w1.length() - 1] << endl;
}
