#include<iostream>
#include<fstream>

using namespace std;

int main(){
    int count = 0;
    string inputext;
    string ToDoArray[100];
    for (int i = 0; i < 100; i++) {
        ToDoArray[i] = " ";
    }
    ifstream InputFile("Save.txt");
    while (InputFile >> inputext and count < 100) {
        if (inputext != "N" and inputext != "C") {
        ToDoArray[count++]=inputext;
        }
    }
    for (int i = 0; i < 100; i++) {
        if (ToDoArray[i] != " ") {
        cout << ToDoArray[i] << endl;
        }
    }
    }