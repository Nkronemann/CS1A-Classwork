#include <iostream>

using namespace std;

void printpattern(int row) {

int count = 1;

for (int i = 1; i <= row; i++) {
    for (int x = 1; x <= i; x++) {
        cout << count << " ";
        count +=1;
    }
    cout << "\n";
}
}

int main(){
int n;
cin >> n;
printpattern(n);
        } 
