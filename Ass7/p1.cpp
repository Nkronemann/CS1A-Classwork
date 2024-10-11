#include <iostream>
using namespace std;

int main()
{
    int input;
    bool prime = true;

    cout << "Please input a number\n";
    cin >> input;

    if (input == 0 or input == 1)
    {
        prime = false;
    }
    for (int i = 2; i <= input / 2; i++)
    {
        if (input % i == 0)
        {
            prime = false;
            break;
        }
    }
    if (prime)
    {
        cout << "This is a prime number\n";
    }
    else
    {
        cout << "This is NOT a prime number\n";
    }
}