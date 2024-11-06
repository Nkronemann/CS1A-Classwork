#include<iostream>
/+
using namespace std;

int main() {
// This shit is the arrays
int numbers[7]={0, 0, 0, 0, 0, 0, 0};
int odds[7]={0, 0, 0, 0, 0, 0, 0};
int evens[7]={0, 0, 0, 0, 0, 0, 0};
int totale = 0, totalo = 0;

// This shit does the math
for (int i = 0; i < 7; i++) {
    cin >> numbers[i];
    if (numbers[i]%2==0) {
        evens[i]=numbers[i];
    totale=totale+numbers[i];
    } else if (numbers[i]%2!=0) {
        odds[i]=numbers[i];
    totalo=totalo+numbers[i];
    }
}
// This shit shows the evens
for (int x = 0; x < 7; x++) {
    if (evens[x]==2) {
        cout << evens[x];
    }
    else if (!evens[x]==0) {
    cout <<" + "<< evens[x];
}
}
cout << " = " << totale << endl;
//this shit shows the odds
for (int o = 0; o < 7; o++) {
    if (odds[o]==1) {
        cout << odds[o];
    }
    else if (!odds[o]==0) {
    cout <<" + "<< odds[o];
}
}
cout << " = " << totalo << endl;
}
// God I hated doing this one