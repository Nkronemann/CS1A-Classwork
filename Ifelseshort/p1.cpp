#include<iostream>
using namespace std;

// Ask the user to input their exam score (out of 100). Classify the grade as 'A' if the score is 90 or above,
 //'B' if it's between 80 and 89, 'C' if it's between 70 and 79,
  //'D' if it's between 60 and 69, and 'F' if it's below 60.

int main() {
   int x;
   cout << "Tell me your number grade and ill give you a letter grade" << endl;
   cin >> x;
   if (x<60) cout << "You got an F" << endl;

   else if (x>=60 and x<=69) cout << "You got a D " << endl;

   else if (x>=70 and x<=79) cout << "You got a C " << endl;

   else if (x>=80 and x<=89) cout << "You got a B " << endl;
   
   else if (X>90) cout << "You got an A good job!" << endl;
}
