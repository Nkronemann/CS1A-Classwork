#include<iostream>
using namespace std;

int main() {
string input;
int x, vowel=0;
    cout << "Please input a sentence or word" << endl;
    getline(cin, input);
    int count=0;
while (count < input.length()) {
    if (input[count]=='a' or input[count]=='e' or input[count]=='i' or input[count]=='o' or input[count]=='u') {
vowel++;

    }
    count++;
    }
    cout << vowel << endl;
}
