#include<iostream>
#include<fstream>
using namespace std;

int main(){
    ifstream m("p1.txt");
    fstream om("p1out.txt");
    int trans[3][3] = { 
        {0, 0, 0},
        {0, 0, 0},
        {0, 0, 0},
    };
     int matrix[3][3] = { 
        {0, 0, 0},
        {0, 0, 0},
        {0, 0, 0},
    };
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            m >> matrix[i][j];
        }
    }
    for (int i = 0; i < 3; i++) { 
        for (int j = 0; j < 3; j++) {
            trans[j][i] = matrix[i][j];
        }
    }
    for (int r = 0; r < 3; r++) {
        for (int c = 0; c < 3; c++) {
            om << trans[r][c];
        }
    om << endl;
    }
}