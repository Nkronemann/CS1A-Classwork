#include <iostream>
#include <fstream>
#include <string>
using namespace std;

bool isSpace(char c);
void processLine(const string &line, ofstream &outFile) {
{
    int wordCount = 0;
    string result;
    bool inWord = false;
    int wordStart = 0;

    for (int i = 0; i <= line.length(); i++)
    {
        if (i == line.length() || isSpace(line[i]))
        {
            if (inWord)
            {
                wordCount++;
                int wordLength = i - wordStart;

                if (wordCount > 1)
                {
                    result += " ";
                }
                if (wordCount == 2)
                {
                    result += string(wordLength, '*');
                }
                else
                {
                    result += line.substr(wordStart, wordLength);
                }
                inWord = false;
            }
        }
        else if (!inWord)
        {
            wordStart = i;
            inWord = true;
        }
    }
    outFile << result << endl;
}
int main()
{
    ifstream inFile("input1.txt");
    ofstream outFile("output1.txt");

    while (getline(inFile, line))
    {
        processLine(line, outFile);
    }
}
}