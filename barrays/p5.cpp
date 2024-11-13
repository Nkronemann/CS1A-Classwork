#include<iostream>
#include<fstream>

using namespace std;

void readArray(int a[10], string fileName) {
    ifstream f("p03.txt");
    for (int i = 0; i < 10; i++) {
        f >> a[i];


    }
    f.close();
}

int main(){

    int arr[10];
    readArray(arr, "p03.txt");
    int max;
    int sum = 0;
    for (int i = 0; i < 10; i++) {
        if (i==0) {
            max = arr[i];
        }
        if (arr[i]>max) {
            max = arr[i];
        }
        sum+=arr[i];
    }
    sum -= max;
    cout << sum << endl;
}