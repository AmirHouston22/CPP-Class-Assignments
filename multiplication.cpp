#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{
    srand(time(0)); //seeding genrator
    int player1 = 0, player2 = 0; //declaring + assigning player variable
    int die1, die2, die3, die4, die5, die6; // declaring die varibles
    int p1score, p2score; //declaring player's score variable
    int point1 = 0, point2 = 0; // declaring player's point variable
    for (int i = 1; i <= 10; i++) { // for statement to have the game play 10 rounds
        die1 = rand() % 6 + 1;
        die2 = rand() % 6 + 1; // assigning variable with a random genrator for numbers between 1 to 6
        die3 = rand() % 6 + 1;
        die4 = rand() % 6 + 1;
        die5 = rand() % 6 + 1;
        die6 = rand() % 6 + 1;
        p1score = (die1 + die2) * die3; 
        p2score = (die4 + die5) * die6;  //assigning variable with a math equation for the die variables
        point1 += 1;
        point2 += 1;
        cout << "Player 1: " << die1 << " , " << die2 << " , " << die3 << endl;
        cout << "Player 1 Score: " << p1score << endl;
        cout << "Player 2: " << die4 << " , " << die5 << " , " << die6 << endl;
        cout << "Player 2 Score: " << p2score << endl;

        if (p1score > p2score) {
            cout << "Player 1 Gets the Point :) " << endl;
            cout << "Player 1 Points: " << point1 << endl;
                
        }
        
        if (p2score > p1score) {
            cout << "Player 2 Gets the Point :) " << endl;
            cout << "Player 2 Points: " << point2 << endl;

        }

        cout << i << endl; // ending of the for statement
    }

    if (p1score > p2score) {
        cout << "Player 1 Winsssss!" << endl;
    }

    if (p2score > p1score) {
        cout << "Player 2 Winssss!" << endl;
    }

    if (p1score == p2score) {
        cout << "It's s Tie" << endl;
    }

 return 0;
}

//adding overall score that keeps up and updae thoughtout the game