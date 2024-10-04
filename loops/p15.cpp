#include<iostream>
using namespace std;

//Write a C++ program that receives 5 positive numbers from the user and prints the highest value of them on the screen. 
//Use a for loop to solve this problem. For example if the input numbers are 5, 25, 14, 99, 66 the output should be 99 which is the max of this group of numbers.

int main() {
        int posnum, highest = 0, five;
        cout << "Please input 5 positive numbers in any order\n";
for (five = 5; five > 0; five--) {
        cin >> posnum;
}
if (posnum > highest) {
        highest = posnum;
}
cout << "The largest number is: "<< highest << endl;
}