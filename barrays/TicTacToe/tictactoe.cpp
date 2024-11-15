#include<iostream>
#include<fstream>

using namespace std;

int main() {
 //file stuff

// int stuff
    int start = 0;
    int row = 0;
    int column = 0;
    int ocount = 0;
    int xcount = 0;
    string input;
        string grid[3][3]= { 
            {"E","E","E"},
            {"E","E","E"},
            {"E","E","E"},
        };
//actual start
    while (start < 1) {
//check rows for win
    for (int r = 0; r < 3; r++) {
        int c = 0;
        if (grid[r][c]=="X") {
            xcount++;
        } else {
            xcount = 0;
        }
        if (xcount == 3) {
            cout << "Congrats player X has won!\n";
        }
        //Checked for X's atp
        //Now check for O's
        if (grid[r][c]=="O") {
            ocount++;
        } else {
            ocount = 0;
        }
        if (ocount == 3) {
            cout << "Congrats player O has won!\n";
        }
    }
    // display board
        for (int r = 0; r < 3; r++) {
            for (int c = 0; c < 3; c++) {
            cout << grid[r][c];
            }
            cout << endl;
        }
        cout << "Please enter if you are X or O\n";
        cin >> input; 
        //if player X
if (input == "X") {
        cout << "Please tell me which grid location you want to place your X\n";
        cin >> row;
        cin >> column;
    for (int r = 0; r < 3; r++) {
        for ( int c = 0; c < 3; c++) {
            if (row == r and column == c) {
                if (grid[r][c]=="O" or grid[r][c]=="X") {
                    cout << "That space is already taken, please try again\n";
                    break;
            } else {
                grid[r][c]="X";
                    }
            }   
        }
    }
}
        //if player O
 if (input == "O" or 0) {
        cout << "Please tell me which grid location you want to place your X\n";
        cin >> row;
        cin >> column;
    for (int r = 0; r < 3; r++) {
        for ( int c = 0; c < 3; c++) {
            if (row == r and column == c) {
                if (grid[r][c]=="O" or grid[r][c]=="X") {
                    cout << "That space is already taken, please try again\n";
                    break;
            } else {
                grid[r][c]="O";
                    }
            }
        }
    }    
      
}
//rules check
// X Rows check
    for (int r = 0; r < 3; r++) {
        for (int c = 0; c < 3;) {
            if (grid[r][c]=="X"){
                xcount++;
            } else {
                xcount = 0;
            }
            if (xcount == 3) {
                start = 1;
                cout << "congrats player X won!\n";
            }
            c++;
        }
    }
//X column Check
for (int r = 0; r < 3;) {
        for (int c = 0; c < 3; c++) {
            if (grid[r][c]=="X"){
                xcount++;
            } else {
                xcount = 0;
            }
            if (xcount == 3) {
                start = 1;
                cout << "congrats player X won!\n";
            }
            r++;
        }
    }
//O column Check
for (int r = 0; r < 3;) {
        for (int c = 0; c < 3; c++) {
            if (grid[r][c]=="O"){
                ocount++;
            } else {
                ocount = 0;
            }
            if (ocount == 3) {
                start = 1;
                cout << "congrats player O won!\n";
            }
            r++;
        }
    }
//O Row Check
for (int r = 0; r < 3; r++) {
        for (int c = 0; c < 3;) {
            if (grid[r][c]=="O"){
                ocount++;
            } else {
                ocount = 0;
            }
            if (ocount == 3) {
                start = 1;
                cout << "congrats player O won!\n";
            }
            c++;
        }
    }
}
}