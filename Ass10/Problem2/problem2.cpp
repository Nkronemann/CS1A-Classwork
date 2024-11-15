#include<iostream>
#include<fstream>

using namespace std;

int main() {
    //int stuff
    int size = 0;
    int i;
    int count = 0;
    int temp = 0;
    //file stuff
    ifstream a("p2.txt");
    fstream ao("p2out.txt");
//check for size of p2.txt
while (a >> i) {
    size++;
}
//set all parts in an array to 0 to not break the code
int majority[size];
for (i = 0; i < size; i++) {
    majority[i] = 0;
}
//input the text into the array
 for (int i = 0; i < size; i++) {
            a >> majority[i];
        }
//nested for loop when outside loop when its on a number
//inside loop checks for duplicates
//increase count of number for each time it has occured
}
