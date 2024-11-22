#include <iostream>
#include <fstream>

using namespace std;

int main(){
    //int stuff
ifstream input("p3.txt");
ofstream output("p3out.txt");
int n = 3;
int mainarray[n];
    //end int stuff
    //input stuff from array
for (int i = 0; i < 3; i++) {
            input >> mainarray[i];
    }
    //end input of stuff from array
    //make subarrays
    for (int start = 0; start < n; start++) {
        int sum = 0;
        //do math for subarrays
        for (int end = start; end < n; end++) {
            sum += mainarray[end];
        //start printing the subarray
            output << "[";
                for (int i = start; i <= end; i++) {
                    output << mainarray[i];
                        if (i < end) output << ", ";
                }
        output << "] =" << sum << endl;
        }
    }
}