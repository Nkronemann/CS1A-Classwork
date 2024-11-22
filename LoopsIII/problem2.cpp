#include<iostream>
using namespace std;
int main(){
string useremail;
string domainoutput = "";
cin >> useremail;
bool domain = false;
    for (int i = 0; i < useremail.length(); i++) {
        if (useremail[i]=='@') {
            domain = true; i++;
        }
        if (domain == true) {
            domainoutput = domainoutput + useremail[i];
        }
    }
cout << domainoutput << endl;
}