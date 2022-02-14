#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
    srand(time(0));
    int player1 = 0;
    for(int i + 1; i <= 10; i++){
    player1 = rand() % 6+ 1;
    cout << "Player 1 Roll:" << player1 << endl;
    cout << endl;
    }
    return 0;




}