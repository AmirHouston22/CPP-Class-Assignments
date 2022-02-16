#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int main()

{
    //for (int i = 11; i <= 11; i++) {
    //cout << i << endl;
  //}
    srand(time(0)); // random seeding generator
    int d1 = 0;
    int d2 = 0;
    int p1score = 0;
    int p2score = 0;
    int p1points = 0;
    int p2points = 0;
    
    for (int i = 1; i <= 3; i++) {
    
     d1 = rand() % 6 + 1;
     d2 = rand() % 6 + 1;
      p1score = d1 + d2;
      p1points = 1;
      cout << "Player 1 first roll: " << d1 << endl;
      cout << "Player 1 second roll: "<< d2 << endl;
      cout << "Player 1 Score: " << p1score << endl;
      
    
      
      if (p1score % 2 == 0){
      cout << p1score << " is even. ";
}

     if (p1score % 2 != 0){
     cout << p1score << " is odd.";
}
     if (p1score % 2 == 0){
     cout << "Player 1 Point: " << p1points << endl;
}
     if (p1score % 2 != 0){
    cout << "No Points"<< endl;
    
}
     cout << endl;
    }
    
    
    // Input
   /* for (int i = 1; i <= 3; i++) {
    player2 = rand() % 6 + 1;
    total1 += player2;
    cout << "Player 2 roll:"<< player2 << endl;
    cout << endl;
    }
    
    if (player1 % 2 == 0) {
      cout << player1 << " is even. ";
}
     if (player1 % 2 != 0) {
     cout << player1 << " is odd.";
}
    /*int player1; // default value
    int player2;
    int gamesWon1 = 0;
    int gamesWon2 = 0;
    player1 = 0; // assignment statement
    player2 = 0;
    // process
    player1 = rand() % 6 + 1;
    player2 = rand() % 6 + 1;
    cout << "Player 1 rolls: " << player1 << endl;
    cout << "Player 2 rolls: " << player2 << endl;
    cout << endl;
    if (player1 > player2) {
      // Output
      //cout << "Player 1 wins!" << endl;
      gamesWon1 = gamesWon1 + 1;
    }
    if (player2 > player1) {
      // Output
      //cout << "Player 2 wins!" << endl;
      gamesWon2 = gamesWon2 + 1;
    }
    if (player1 == player2) {
      cout << "No points awarded." << endl;
    }
    player1 = rand() % 6 + 1;
    player2 = rand() % 6 + 1;
    cout << "Player 1 rolls: " << player1 << endl;
    cout << "Player 2 rolls: " << player2 << endl;
    cout << endl;
    if (player1 > player2) {
      // Output
      //cout << "Player 1 wins!" << endl;
      gamesWon1 = gamesWon1 + 1;
    }
    if (player2 > player1) {
      // Output
      //cout << "Player 2 wins!" << endl;
      gamesWon2 = gamesWon2 + 1;
    }
    cout << "Player 1 total: " << gamesWon1 << endl;
    cout << "Player 2 total: " << gamesWon2 << endl;
    cout << endl << endl;
    if (player1 == player2) {
      cout << "No points awarded." << endl;
    }
    if (gamesWon1 > gamesWon2) {
      cout << "Player 1 wins." << endl;
    }
    if (gamesWon2 > gamesWon1) {
      cout << "Player 2 wins." << endl;
    }
    if (gamesWon2 == gamesWon1) {
      cout << "Tie." << endl;
    }*/
    return 0; 
    

    }
  







