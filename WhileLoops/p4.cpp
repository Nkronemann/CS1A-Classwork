#include<iostream>
using namespace std;

int main() {
int x=0, count=0;

while (x<1000) {
    if (x%2!=0) {
    count=x+count;
    }
    x++;

}
    cout << count << endl;
}