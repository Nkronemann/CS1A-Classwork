#include<iostream>
using namespace std;

int main() {
string input;
int x=0;
bool afterspace=false;

cout << "Please input a sentence and ill capitalize each word" << endl;
getline (cin, input);

while (x < input.length()) {

 if (afterspace==true) {
       if (input[x] >= 97 and input[x] <= 122) {
            input[x]=input[x] - 32;
            afterspace=false;
        } 
    } else if (input[x]==' ') {
    afterspace=true;
 }
 if (x==0) {
    if (input[x] >= 97 and input[x] <= 122) {
            input[x]=input[x] - 32;
    }
 }
    x++;
    }
    cout << input << endl;
}