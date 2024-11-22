#include<iostream>
#include<fstream>

using namespace std;

bool isPrime(int prime) {
    bool isPrime = true;
    int sum = 0;
    for (int i = 2; i <= prime / 2; i++){
        if (prime % i == 0){
            isPrime = false;
            break;
        }
    }
}
int main(){
    int i = 0;
    int sum = 0;
for (i = 0; i <= 100; i++){
        isPrime(i);
        if (isPrime == true) {
            sum += i;
        }
}
cout << sum;
}