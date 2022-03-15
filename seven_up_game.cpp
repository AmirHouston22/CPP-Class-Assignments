#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{
    srand (time(0));
    int player1 = 0, player2 = 0;
    int die1, die2;
    int total1 = 0, total2 = 0, total3 = 0;
    int pot = 0;
    int point1 = 0, point2 = 0;
    while (point1 <= 21 && point2 <= 21) {
        die1 = rand() % 6 + 1;
        die2 = rand() % 6 + 1;
        player1 = die1 + die2;
        player2 = die1 + die2;
        pot = 20;
        point1 = 21;
        point2 = 21;
        total1 += point1 + 7;
        total2 = player1 - 7;
        total3 = 7 - player1;
         
        cout << "Player 1: " << player1 << endl;
        cout << "Player 2 : " << player2 << endl;
        
        if (player1 == 7) {
            cout << "Points: " << total1 << endl;
        }
        if (player1 > 7) { 
            cout << "Points: " << point1 - total2 << endl;
        }
        if (player1 < 7) {
            cout << "Points: " << point1 - total3 << endl;
        }
        if (player2 == 7) {
            cout << "Points: " << total1 << endl;
        }
        if (player2 > 7) { 
            cout << "Points: " << point1 - total2 << endl;
        }
        if (player2 < 7) {
            cout << "Points: " << point1 - total3 << endl;
        }
        //cout << player1 << "/n";
        player1++;
        

    }
        if (player1 > player2) {
            cout << "PLayer 1 is the Winnerrr!" << endl;
        }
        if (player2 > player2) {
            cout << "Player 2 is the Winnerrr!" << endl;
        }


return 0;
}
