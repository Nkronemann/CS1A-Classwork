#include <iostream>
#include <fstream>

using namespace std;

//function to reverse
  void reversethatstuff(string line) {
        int start = 0;
        int end = line.length() - 1;

        while (start < end) {
            swap(line[start], line[end]);
            start++;
            end--;
        }
    }
int main() {
    int i = length -1;
    string line;
    //input and output
    ifstream FileInput("input4.txt");
    ofstream FileOutput("output4.txt");
    string lastword = " ";

    //Read line
    while (getline(FileInput, line)) {
            int length = line.length();
    }
//move the text around
    while (i>=0 and line[i]!=' ') {
        lastword = line[i] + lastword; // add characters infront of others
            i--;
}
while (start < end) {
    char temp = lastword[start];
        lastword[start] = lastword[end];
            lastword[end] = temp;
                start++;
                    end--;
}

}
