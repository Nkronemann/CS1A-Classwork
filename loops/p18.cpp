#include<iostream>
using namespace std;

int main() {
  int last, prv;
    bool ascending = true;
for (int i = 0; i < 5; i++) {

    cout << "Enter a number: ";
    cin >> last;

if (i > 0) {
    if (last < prv) {
                ascending = false;
                     }
        prv = last;
        }

  }
 if (ascending == true) {
    cout << "The list is ascending\n";
 } else {
    cout << "The list is not ascending\n";
 }
}


