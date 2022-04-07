
// Online C++ Compiler - Build, Compile and Run your C++ programs online in your favorite browser

#include<iostream>
#include<cstdlib>
#include<ctime>
#include<cmath>

using namespace std;

int main()
{
    srand(time(0));
    int d1, d2, d3, d4;
    int point1, point2;
    int winRoll[3] = {6, 5, 4};
    int loseRoll[3] = {1, 2,3};
    while(point1 <= 0){
        d1 = rand() % 6 + 1;
        d2 = rand() % 6 + 1;
        cout<<"Player 1 roll; "<< d1 <<"-"<< d2 <<endl;
        point1 = 20;
        
        if(d1 == winRoll[] && d2 == winRoll[]){
            point1 += 1;
            cout<<"Player 1 get a point"<<endl;
            cout<<"Player 1 score: "<<point1<<endl;
        }
        if(d1 == loseRoll[] && d2 == loseRoll[]){
            point1 -= 1;
            cout<<"Player 1 loses a point"<<endl;
            cout<<"Player 1 score"<< point1<<endl;
        }
        cout<<endl;
    }
    
    while(point2 <= 0){
        d3 = rand() % 6 + 1;
        d4 = rand() % 6 + 1;
        cout<<"Player 2 roll; "<< d3 <<"-"<< d4 <<endl;
        point2 = 20;
        
        if(d1 == winRoll[] && d2 == winRoll[]){
            point2 += 1;
            cout<<"Player 2 get a point"<<endl;
            cout<<"Player 2 score: "<< point2 <<endl;
        }
        if(d3 = loseRoll[] && d4 = loseRoll[]){
            point2 -= 1;
            cout<<"Player 2 loses a point"<<endl;
            cout<<"Player 2 score"<< point2 <<endl;
        }
        cout<<endl;
    }
    if(point1 == 0){
        cout<<"Player 1 lose"<<endl;
        cout<<"Player 2 wins"<<endl;
    }
    if(point2==0){
        cout<<"Player 2 lose"<<endl;
        cout<<"player 1 wins"<<endl;
    }
    
    return 0;
}
