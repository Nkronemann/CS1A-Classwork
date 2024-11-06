#include<iostream>

using namespace std;
int main(){
//setup
    bool largerthanprev = false;
    int i=0,x=0;
int integer[2];
int previous= 0;
int current = 0;
//5 sets of 2 integer pairs
for (int x = 0; x < 5; x++) {

        //clears integers
        previous=integer[i];
        integer[1]=0;
        integer[2]=0;
        //move this to proper location

        //2 pair integer formation
    for (int i = 0; i < 2; i++){
        cin >> integer[i];
            if (previous<integer[i]){
                largerthanprev = true;
    }
    if (largerthanprev==true) {
    cout << previous << ", " << current << ", ";
     } else {
        cout << current << ", " << previous << ", ";

}
}
}
}