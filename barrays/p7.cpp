#include<iostream>
#include<fstream>

using namespace std;
void reverseArray(int a[10]) {
int i = 0, j = 9;
while (i < j) {
    int temp = a[i];
    a[i] = a[j];
    a[j] = temp;
    i++;
    j++;
}
}
int main(){

    int a[10];
    int temp;
    ifstream f("p03.txt");
//read text file 
 for (int i = 0; i < 10; i++) {
            f >> a[i];
    }
//for testing sake
    for (int x = 0; x < 10; x++) {
        cout << a[x] << endl;
    }
//for testing sake
reverseArray(1);
}



