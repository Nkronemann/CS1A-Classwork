#include <iostream>
#include <fstream>
using namespace std;

void print(int pat) {

    ofstream output("p3.txt");
    int row = 1;
    char letters = 65;

    for (int i = 1; i <= pat; i++) {
        row++;
            for (int x = 1; x <= i; x++) {
            output << letters;
}
    letters +=1;
    if (i<row){
    output << "\n";
}
}
}

int main(){
    int n;
    cin >> n;
    print(n);
} 
