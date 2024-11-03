#include <iostream>
#include <fstream>
#include <string>

using namespace std;

void startabbrev(const string& line, ofstream& outFile) {
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
    ifstream inFile("p2inp2.txt");
    ofstream outFile("p2out2.txt");
    string line;
    while (getline(inFile, line)) {
    startabbrev(line, outFile);
    }
}