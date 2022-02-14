#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{
    srand(time(0)); // seed rng
    int d1 = 0;
    int d2 = 0;
    int d3 = 0;
    int d4 = 0;
    string p1name;
    string p2name;
    p1name = "Mary";
    p2name = "Joe";
    int p1score = 0;
    int p2score = 0;
    d1 = rand() % 6 + 1;
    d2 = rand() % 6 + 1;
    d3 = rand() % 6 + 1;
    d4 = rand() % 6 + 1;
    p1score = d1 + d2 + d3 + d4;
    cout << "d1: " << d1 << endl;
    cout << "d2: " << d2 << endl;
    cout << "d3: " << d3 << endl;
    cout << "d4: " << d4 << endl;
    cout << "Player 1's score: " << p1score
         << endl;
    d1 = rand() % 6 + 1;
    d2 = rand() % 6 + 1;
    d3 = rand() % 6 + 1;
    d4 = rand() % 6 + 1;
    cout << "d1: " << d1 << endl;
    cout << "d2: " << d2 << endl;
    cout << "d3: " << d3 << endl;
    cout << "d4: " << d4 << endl;
    p2score = d1 + d2 + d3 + d4;
    cout << "Player 2's score: " << p2score
         << endl;
    if (p1score > p2score) {
      cout << "Player 1 wins." << endl;
    }
    if (p2score > p1score) {
      cout << "Player 2 wins." << endl;
    }
    if (p1score == p2score) {
      cout << "It's a tie." << endl;
    }
    return 0;
}