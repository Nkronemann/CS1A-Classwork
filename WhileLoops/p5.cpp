#include<iostream>
using namespace std;

int main() {
string input;

bool afterspace=false;
int x=0;
getline(cin, input);

while (x < input.length()) {


    if (afterspace==true) {

if (input[x]==' ') {
    afterspace=true;
}

}
x++;
}
}