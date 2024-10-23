#include <iostream>
using namespace std;
bool ispalindrome (string temp) {
    string temp;
    for (int i = temp.length()-1; i>=0; i--){
        temp += temp[i];
    }
    if (temp==x){
        return true;
    }
    else {
        return false;
    }
    }
    //code to check if input (s) is palindrome or not.
    // once determined returned true or false
int main(){
     string temp;
    for (int i=3; i>0; i--) {
    cout << ispalindrome("racecar");
    getline (cin, temp);
    bool awnser = ispalindrome(temp);
    if (awnser==true){
        cout << "Palindrome" << endl;
    }
else {
    cout << "Not a Palindrome" << endl;
}
    }
    }
