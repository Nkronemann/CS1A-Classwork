#include <iostream>
#include <fstream>
using namespace std;

void startabbrev(string line, ofstream & outFile) {
    string abbr;
    if (line.length() > 0) {
        abbr += toupper(line[0]);
    }
    for (int i = 1; i < line.length(); i++) {
        if (line[i-1] == ' ' && line[i] != ' ') {
            abbr += toupper(line[i]);
        }
    }
    outFile << abbr << endl;
}

int main() {
    ifstream inFile("input2.txt");
    ofstream outFile("output2.txt");
    string line;
    while (getline(inFile, line)) {
    startabbrev(line, outFile);
    }
}