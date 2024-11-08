#include <iostream>
#include <fstream>
using namespace std;

void printpattern(int pat) {
    // open/write file
ofstream output("p3.txt");
//make the first letter be A
int row = 1;
char letters = 65;
//Loop start
for (int i = 1; i <= pat; i++) {
    row++;
    for (int x = 1; x <= i; x++) {
        output << letters;
    }
    //Increase the leter via ASCII
    letters +=1;
    //making sure theres not a random 6th line
    if (i<row){
    output << "\n";
    }

}
}

int main(){
int n;
cin >> n;
printpattern(n);
        } 
