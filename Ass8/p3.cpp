#include <iostream>
#include <fstream>
#include <string>

using namespace std;

void firstwordIndex(const string& line, ofstream& outFile) {
    int wordIndex = 1;
    int i = 0;
    while (i < line.length()) {
        while (i < line.length() && line[i] == ' ') {
            i++;
        }
        if (i < line.length()) {
            if (line[i] == 'a' || line[i] == 'A') {
                outFile << wordIndex << " ";
                return;
            }
            wordIndex++;
        }
        while (i < line.length() && line[i] != ' ') {
            i++;
        }
    }
    outFile << wordIndex - 1 << " ";
}
int main() {
    ifstream inFile("input3.txt");
    ofstream outFile("output3.txt");
    string line;
    while (getline(inFile, line)) {
        firstwordIndex(line, outFile);
    }
}