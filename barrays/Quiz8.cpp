#include<iostream>
using namespace std;

int main(){
    int rows;
    cin >> rows;

for (int i = rows; i > 0; i--) {
    for (int x = i; x > 0; x--) {
        cout << i;
    }
    cout << endl;
}
}