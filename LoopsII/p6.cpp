#include <iostream>
#include <fstream>
using namespace std;


int main() {
    ofstream outfile("out6.txt");
    int integer, i, o;
    cin >> integer;
for (i = 1; i <= integer; i++) {
    o = 0;
    while (o<i) {
        o++;
        outfile << i;
    }
if (i!=integer) {
      outfile << endl;
}
}
    outfile.close();
}
