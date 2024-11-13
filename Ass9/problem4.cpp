#include <iostream>
#include <string>
using namespace std;

int main() {
    string input;
    
    cout << "Enter a sentence with first names: ";
    getline(cin, input);

    string current="";
    string first="";
    
   
    for (int i=0; i<=input.size(); i++) {
        if (i==input.size() or input[i]==' ') {
            if (first == "" or current < first) {
                first = current;
}
            current = "";  
} else {
            current += input[i];
}
}
    cout << "The first name alphabetical name is " << first << "\n";
}