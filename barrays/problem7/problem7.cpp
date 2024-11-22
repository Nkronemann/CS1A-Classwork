#include<iostream>
#include<fstream>

using namespace std;


void readArrays(int a[2][3], int b[3][4]) { 
    ifstream f("p07.txt");
    for(int r = 0; r < 2; r++) { 
        for(int c = 0; c < 3; c++) { 
            f >> a[r][c];
        }
    }
    for(int r = 0; r < 3; r++) { 
        for(int c = 0; c < 4; c++) { 
            f >> b[r][c];
        }
    }
}
void multiplyArrays(int a[2][3], int b[3][4], 
                int res[2][4], int r, int c, int size) {
    int sum = 0;               
    for (int i = 0; i < size; i++) {
        sum += a[r][i] * b[i][c];
                    }
        res[r][c] = sum;

}
void printMatrix(int res[2][4]) {
for (int i = 0; i < 2; i++) {
    for (int j = 0; j < 4; j++) {
        cout << res[i][j];
    }
}
}

int main(){
 int a[2][3], b[3][4], res[2][4];
readArrays(a, b);
for (int i = 0; i < 2; i++) {
    for (int j = 0; j < 4; j++) {
        multiplyArrays(a, b, res, i, j, 3);
    }
}
printMatrix(res);
}