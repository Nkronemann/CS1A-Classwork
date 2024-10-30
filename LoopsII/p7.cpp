#include <iostream>
#include <fstream>
using namespace std;


int main() {
    ofstream outfile("out7.txt");
    int lines, i, current = 0;
    cin >> lines;
for (i = 1; i <= lines; i++) {
while (current<=i) {
    current++;
    cout << i;
}
outfile << endl;
    }

    outfile.close();
}