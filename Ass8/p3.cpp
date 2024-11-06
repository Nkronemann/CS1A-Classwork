#include <iostream>
#include <fstream>
using namespace std;

void firstwordIndex(string & line, ofstream & outFile) {
    int wordIndex = 1;
    int i = 0;
while (i < line.length()) {
while (i < line.length() and line[i] == ' ') {
     i++;
    }
if (i < line.length()) {
if (line[i] == 'a' or line[i] == 'A') {
    outFile << wordIndex << " ";
    return;
    }
    wordIndex++;
    }
    while (i < line.length() and line[i] != ' ') {
    i++;
    }
    }
    outFile << wordIndex - 1 << " ";
    }
int main() {

    ifstream inFile("input3.txt");
    ofstream outFile("output3.txt");
while (getline(inFile, line)) {
        firstwordIndex(line, outFile);
    }
}