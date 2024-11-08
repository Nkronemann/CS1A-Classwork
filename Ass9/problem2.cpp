#include <iostream>

using namespace std;

void printpattern(int rows) {
//int stuff
int middle = 1;
int count = 1;
//first
for (int i = 1; i <= rows; i++) {
int reverse = count;
while (count<=middle) {
    cout << count << " ";
    count++;
        }
        }
}
int main(){
int n;
cin >> n;
printpattern(n);
        } 
