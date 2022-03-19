#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int diceTotal(int rolls[], int n) {
  int total = 0;
  for (int i = 0; i < n; i++) {
    total += rolls[i];
  }
  return total;
}
int main()
{
    srand(time(0));
    const int ROLLS = 6;
    int dRolls[] = {1,2,3,4,5,6};
    for (int d : dRolls) {
      cout << d << " ";
    }
    cout << endl;
    int dieRolls[ROLLS];
    // initialize array
    for (int d : dieRolls) {
      cout << d << " ";
    }
    cout << endl;
    for (int i = 0; i < ROLLS; i++) {
      dieRolls[i] = rand() % 6 + 1;
    }
    /*for (int i = 0; i < ROLLS; i++) {
       cout << dieRolls[i] << " ";
    }*/
    // range for loop
    for (int d : dieRolls) {
      cout << d << " ";
    }
    cout << endl;
    int total = 0;
    total = diceTotal(dieRolls, ROLLS);
    /*for (int d : dieRolls) {
      total += d;
    }*/
    /*for (int i = 0; i < ROLLS; i++) {
      total += dieRolls[i];
    }*/
    cout << "total: " << total << endl;
    int total2 = dieRolls[0] + dieRolls[1]
                 + dieRolls[4];
    /*int d1, d2, d3, d4, d5, d6;
    d1 = rand() % 6 + 1;
    d2 = rand() % 6 + 1;
    d3 = rand() % 6 + 1;
    d4= rand() % 6 + 1;
    d5 = rand() % 6 + 1;
    d6 = rand() % 6 + 1;
    int total = d1 + d2 + d3 + d4 + d5 + d6;*/
    return 0;
}