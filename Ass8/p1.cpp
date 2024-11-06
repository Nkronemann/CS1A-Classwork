#include <iostream>
#include <fstream>

using namespace std;

int main() {

    // setup
ifstream FileInput("input1.txt");
ofstream FileOutput("output1.txt");
string line;

    //reading Fileinput and doing the thing
while(getline(FileInput, line)) {
    string word1="";
    string word2="";
    bool IsSpace = false;

    //check each character
    for (int i = 0; i < line.length(); i++){
        if (line[i] == ' ' and !IsSpace) {
            IsSpace = true;
        } else if (!IsSpace){
            //build first word
            word1 += line[i];
        } else {
            //build second word
            word2 += line[i];
        }
    }
//replace all characters in second word with *
for (int i = 0; i < word2.length(); i++) {
    word2[i] = '*';
    }
    //output to file
if (!word1.empty()) {
    FileOutput << word1 << " " << word2 << endl;
}
}
FileInput.close();
FileOutput.close();
}