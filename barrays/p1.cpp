#include<iostream>
#include<fstream>
using namespace std;
int main(){
string heights[5];
// maybe ifstream FileInput("input1.txt")
for (int i = 0; i < 5; i++) {
    cin >> heights[i];
}

for (int x = 0; x < 5; x++) {
cout << heights[x] << endl;
}
}