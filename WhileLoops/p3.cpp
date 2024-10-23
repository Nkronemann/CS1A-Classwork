#include<iostream>
using namespace std;

int main() {
string input;
char character, chartwo;
int x=0, count=0;

cout << "Please input a sentence and a letter you want us to count\n";
getline (cin, input);
cin >> character;

if (character<=97 and character>=122) {
    chartwo=character-32;
} else if (character<=65 and character>=90) {
    chartwo=character+32;
}

while (x < input.length()) {
    if (input[x]==character or input[x]==chartwo) {
        count++;
    }

    x++;
}
cout << count << endl;
}