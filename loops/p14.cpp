#include<iostream>
using namespace std;

int main() {
        int itemnum;
                double price;
                double total = 0.0;

        cout << "Please enter the amount of items you have\n";
        cin >> itemnum;
        if (itemnum<=0) {
                "Please enter a valid amount\n";
                return 1;
        }
        for (int i=0; i < itemnum; i++) {
                cout << "Enter the price of an item\n";
                cin >> price;
                total+=price;
        }
        cout << "The total price of all items is: " << total << endl;
}