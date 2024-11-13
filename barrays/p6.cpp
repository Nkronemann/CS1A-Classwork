#include<iostream>
#include<fstream>

using namespace std;

void readArray(int a[5], int b[5], string fileName) {
    ifstream f("p06.txt");
        for (int i = 0; i < 5; i++) {
            f >> a[i];
    }
    for (int i = 0; i < 5; i++) {
            f >> b[i];
    }
    f.close();
}

int main(){
    int a[5], b[5];
    readArray(a, b, "p06.txt");
    bool sameMembers = true;
    for (int i = 0; i < 5; i++) {
        bool found = false; // for every member of array a
            for( int j = 0; j < 5; j++) {
                if (a[i] == b[j]) {
                    found = false;
                    break;
                }
                if (!found) {
                    sameMembers = false;
                    break;
                }
            }
        }
        if(sameMembers) {
            cout << "Arrays have same members!\n";
        } else if (!sameMembers) {
            cout << "Arrays do not have same members!\n";
        }
}