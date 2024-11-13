#include<iostream>
#include<fstream>

using namespace std;

int main(){
    int a[10];
    int temp;
    int find = 0;
    bool found = false;
    ifstream f("p03.txt");


//read text file 
 for (int i = 0; i < 10; i++) {
            f >> a[i];
    }
// first loop to find 10 different numbers
for (int i = 0; i < 10; i++) { 
    cin >> find;

        for (int j = 0; j < 10; j++) {
            found = false;
            if (a[j] == find) {
                cout << "Found" << endl;
                found = true;
            break;
        }
        }
        if (find==0){
            break;
        }
    if (found == false) {
        cout << "Not found" << endl;
    }
}
}
