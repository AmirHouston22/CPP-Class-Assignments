#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{
    srand (time(0));
    int player1 = 0, player2 = 0;
    int die1, die2;
    int total1, total2, total3;

    while (player1 <= 0 && player2 <= 0) {
        die1 = rand() % 6 + 1;
        die2 = rand() % 6 + 1;
        player1 = die1 + die2;
        player2 = die1 + die2;
        total1 -= 7;
        total2 -= player1 - 7;
        total3 -= 7 - player1;
        if (player1 == 7) {
            cout << "Points: " << total1 << endl;
        }
        if (player1 > 7) { 
            cout << "Points: " << total2 << endl;
        }
        if (player1 < 7) {
            cout << "Points: " << total3 << endl;
        }
        cout << "Player 1: " << player1 << endl;
        cout << "Player 2 : " << player2 << endl;
        
    }



return 0;
}
