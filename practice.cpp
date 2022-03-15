#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{
    srand(time(0));
    int die1 = 0;
    int player1 = 0;
    die1 = rand() % 6 + 1;
    player1 = die1;
    cout << "Player1: " << die1 <<endl;
     if (die1 % 2 == 0) {
         cout << die1 << " is even";
     }
     if (die1 % 2 != 0) { 
         cout << die1 << " is odd";
     }

    return 0;
}