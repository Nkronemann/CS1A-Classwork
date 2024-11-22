#include <iostream>
#include <fstream>
using namespace std;



string PalPyrRow(int row){
    string result = " ";
    for (int i = 1; i <= row; ++i) {
        result += (char)(i + '0');  
}
    for (int i = row - 1; i >= 1; --i) {
    result += (char)(i + '0');  
}
    return result;
}

void MakePalPyr(int n) {
    ofstream outFile("p2.txt");

    for (int i = 1; i <= n; ++i) {
    outFile << PalPyrRow(i) << endl;
}

    outFile.close();
}
int main(){
    int n;
    cin >> n;
    MakePalPyr(n);
}