#include <iostream>
using namespace std;

int main() {
int count;
cout << "Please input the height, and width of the grid you want to create\n";
cin >> count;
for (int y = 0; y < count; y++) {
    for (int x = 0; x < count; x++) {
        cout << "* ";
    }
cout << endl;
}
}