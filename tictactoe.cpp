#include <iostream>
#include <string.h>
#include <iomanip>
using namespace std;

// game table
char table[3][3] = {'0','0'};
// Marking
char mark[2] = {'X','O'};
// Number of available moves
int number_move = 9;
// Game menu
void intro(void) {
    cout << "*****************************" << endl;
    cout << "*     Tic Tac Toe Game!     *" << endl;
    cout << "*****************************" << endl;
    cout << "..........Produced by Mudoker" << endl;
    cout << "..........Version 1.0.0" << endl;
    cout << "Press 1 to continue.........." << endl;
    cout << "Press 2 to exit.............." << endl;
}

// Print table of game
void print_table(void) {
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cout <<"|" << table[i][j] << "|";
        }
        cout << endl;
    }
}
int winner(char table[3][3]) {
    // Row Check
    for (int i = 0; i < 3; i++) {
        if (table[i][0] == table[i][1] && table[i][1] == table[i][2] && table[i][0] != ' '){
            cout << "The winner is: " << table[i][0] << endl;
            return 0;
        }
    }
    // column Check
    for (int i = 0; i < 3; i++) {
        if (table[0][i] == table[1][i] && table[1][i] == table[2][i] && table[0][i] != ' '){
            cout << "The winner is: " << table[0][1] << endl;
            return 0;
        }
    }
    //diagonal
     if(table[0][0] == table[1][1] && table[1][1] == table[2][2] && table[0][0] != ' ')
    {
        cout << "The winner is: " << table[0][0] << endl;
        return 0;
    }
    // diagonal
    if(table[0][2] == table[1][1] && table[1][1] == table[2][0] && table [0][2] != ' ')
    {
        cout << "The winner is: " << table[0][2] << endl;
        return 0;
    }
}
// Game structure
void game(void) {
    // print table;
    print_table();
    // input
    string move;
    // auto update marking
    int tmp = 0;
    // If number of moves still > 0
    while (number_move >= 0) {
        cout << ">>> " << mark[tmp] << "'s turn: ";
        cin >> move;
        // Check for valid input
        if (table[move[0] - 48][move[1] - 48] == ' ') {
            table[move[0] - 48][move[1] - 48] = mark[tmp];
            // print table
            print_table();
            // update marking
            if (tmp == 0) {
                tmp++;
            }
            else {
                tmp = 0;
            }
            // minus every legit moves
            number_move--;
            winner(table);
            continue;
        }
        // If that position is not ' ' -> taken by 'X' or 'O' -> prompt user to enter another places
        else {
            continue;
        }
    }
}
int main (void) {
    // Initialize the game table
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            table[i][j] = ' ';
        }
    }
    // Game menu
    while (true) {
        char choice;
        intro();
        cout << ">>> ";
        cin >> choice;
        // If user want to exit then stop the loop
        if (choice == '2') {
            break;
        }
        // Else, enter the game
        else if (choice == '1') {
            game();
        }
        // Invalid commands
        else {
            cout << endl;
            cout << ">>> Invalid command!....." << endl;
            cout << ">>> Program restarting..." << endl;
            cout << endl;
        }
    }
    return 0;
}