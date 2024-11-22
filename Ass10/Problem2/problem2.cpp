#include<iostream>
#include<fstream>

using namespace std;

int findmajoritynum(int numb[], int n) {
    // loop over each number
    for (int i = 0; i < n; i++) {
        int count = 0;
            //count the amount of times each number shwos up
            for (int j = 0; j < n; j++) {
                if (numb[j] == numb[i]) {
                    count++;
                }
            }
            //if count is more than n/2
        if (count > n / 2) {
            return numb[i];
        }
    }
    return -1; // if there is no majority
}

int main() {
    //int stuff
ifstream input("p2.txt");
ofstream output("p2out.txt");
    int size = 5;
    int nums[size];
    int n = 0;
// end int stuff
while (input >> nums[n] and n < size) {
    n++;
}
int majoritynum = findmajoritynum(nums, n);
output << majoritynum;
}
