#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{
    srand(time(0));
    int die1, die2;
    int even1, even2, odd1, odd2;
    int player1 = 0, player2 = 0;
    int pot;
    while (player1 <= 50 && player2 <= 50) {
        die1 = rand() % 6 + 1;
        die2 = rand() % 6 + 1;
        even1 = player1 + die1;
        even2 = player2 + die2;
        odd1 = player1 - die1;
        odd2 = player2 - die2;
        pot = 100 - die1;
        pot = 100 - die2;
        cout << "Player 1 roll: " << die1 << endl;
        cout << "Player 2 roll: " << die2 << endl;
        cout << "The score so far is:" << endl;
        cout << "The Pot: " << pot << endl;
        cout << "Player1: " << player1 << ", Player2: "
             << player2 << endl;

        if( die1 % 2 == 0) {
            cout << " Player 1: " << even1 << ", Player2: "
                << even2 << endl;
        }
        if( die1 % 2 != 0) { 
            cout << "Player 1:" << odd1 <<", Player 2: " 
            << odd2 << endl;
        }
    }
    cout << endl << "The final score is:" << endl;
    cout << "PLayer1:" << player1 << ", Player2: "
         << player2 << endl;
    if (player1 > player2) {
        cout << "Player 1 win! " << endl;
    }
    if (player2 > player1) {
        cout << "Player 2 wins! " << endl;
    }
return 0;

}

//starts with 0 points
//pot have 100
  