#include <iostream>
#include <cstdlib>
#include <ctime>
#include <math.h>
using namespace std;

bool prime(int x) {
    for(int i = 2; i<x; i++) {
        if (x%i == 0)
            return false;
    }
    return true;
}

int main()
{
    

 cout<<prime(5)<<"\n";
 cout<<prime(10)<<"\n";

 



    return 0;
}