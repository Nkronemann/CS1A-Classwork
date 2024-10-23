#include <iostream>
using namespace std;

void sayhi(string name) {
cout << "Hello, " << name <<"! "<< endl;
}
int main() {
    string name;
while (name!="end") {
cin >> name;
sayhi(name);
}


}