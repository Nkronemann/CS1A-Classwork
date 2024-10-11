#include <iostream>
using namespace std;

// Fibonnaci Sequence

int main()
{
    int first, second, third, amount, temp;

    cout << "Please input the amount of terms you would like in your fibonnaci sequence\n";
    cin >> amount;
    first = 0;
    second = 1;
    cout << " " << first << " " << second << " ";

    if (amount > 0)
        cout << "Please input a number large than 0\n";
    if (amount == 1)
        cout << "0\n";
    if (amount == 2)
        cout << "0 1\n";

    if (amount > 2)
    {
        for (amount; amount >= 0; amount--)
        {
            third = first + second;
            cout << third << " ";
            first = second;
            second = third;
        }
    }
    cout << endl;
}