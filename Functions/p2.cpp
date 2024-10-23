#include <iostream>
using namespace std;

double sum(double first, double second) {
    double total;
total=first+second;
return total;
}
int main() {
for (int i=3; i>0; i--) {
    double first, second, total;
    cin >> first;
    cin >> second;
    total = sum(first, second);
    cout << total << endl;
    
}
}