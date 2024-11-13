#include<iostream>
#include<fstream>

using namespace std;

int main(){
    int a[10];
    int temp;
    int find = 0;
    int count = 0;
    ifstream f("p03.txt");


//read text file 
 for (int i = 0; i < 10; i++) {
            f >> a[i];
    }
// first loop to find 10 different numbers
for (int i = 0; i < 10; i++) { 
    cin >> find;
    count = 0;
        for (int j = 0; j < 10; j++) {
            if (a[j] == find) {
            count++;
            break;
        }
        }
        if (find==0){
            break;
        }
    if (count>=1) {
        cout << count << endl;
    }
}
}
