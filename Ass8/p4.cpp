#include <iostream>
#include <fstream>
#include <string>

using namespace std;

void lws(string line, ofstream& outFile) {
    int lastSpace = line.rfind(' ');


    for (int i=(lastSpace==-1) ? line.length() - 1 : lastSpace + 1; i < line.length(); i++) {
        outFile << line[i];
    }


    for (int i=(lastSpace==-1) ? line.length() - 1 : lastSpace + 1;  i >= (lastSpace==-1 ? -1 : lastSpace);  i--) {
        outFile << line[i];
    }
}
int main() {
    ifstream inFile("input4.txt");
    ofstream outFile("output4.txt");
    string line;
    while (getline(inFile, line)) {
        lws(line, outFile);
    }
}