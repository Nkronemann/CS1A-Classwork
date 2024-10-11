#include<iostream>
using namespace std;

//Fibonnaci Sequence

int main() {
int last, prv;
    bool ascending = true;
    bool descending = true;
for (int i = 0; i < 10; i++) {

    cout << "Enter a number: ";
    cin >> last;

if (i > 0) {
    if (last < prv) {
                ascending = false;
                cout << ascending << endl;;
                     }
        prv = last;
 
if ( i < 0) {
                if ( last > prv)
                descending = false;
                cout << descending << endl;
        }

  }
}
 if (ascending == true) {
    cout << "The list is ascending\n";
 }
  if (descending == true) {
    cout << "The list is descending\n";
 } 
 if (descending == true and ascending == true) {
    cout << "The list is shuffled\n";
 }
 } 
