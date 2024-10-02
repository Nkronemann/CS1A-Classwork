#include<iostream>
using namespace std;

int main() {
int a,b,c,d,e,x;

for (x=1;x>=1;) {
cout << "bullshit\n";
cin >> a;
cin >> b;
cin >> c;
cin >> d;
cin >> e;

if (a<b and a<c and a<d and a<e) {
    if (b>a and b<c and b<d and b<e) {
        if (c>a and c>b and c<d and c<e) {
            if (d>a and d>b and d>c and d<e) {
                if (e>a and e>b and e>c and e>d) {
                    cout << "ascending" << endl;
                    x=0;
                }
            }
        }
    }
}
}
}


