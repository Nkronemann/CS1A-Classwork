#include<iostream>
#include<fstream>

using namespace std;

void caesarcypher(string cypher) {
    string replacement = "";
    string temp;
for ( int i = 0; i < cypher.length();i++) {
    if (cypher[i]==' ') {
        temp = ' ';
    }
    if (cypher[i]!='z' and cypher[i]!='y' and cypher[i]!=' ') {
        temp = cypher[i]+3;
    }
    if (cypher[i]=='z' or cypher[i]=='y') {
        if (cypher[i]=='z') {
        temp = 'c';
        } else {
        temp = 'b';
        }
    }
replacement += temp;
}
cout << replacement << endl;
}
int main(){
    cout << "Please only input lower case letters\n";
    string input;
    getline(cin, input);
    caesarcypher(input);
}