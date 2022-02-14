#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
            // enter and average three test grades
            int grade1, grade2, grade3;
            cout << "Enter the first grade: ";
            cin >> grade1;
            cout << "Enter the second grade: "; 
            cin>> grade2;
            cout << "Enter the third grade: ";
            cin>> grade3;
            const int numGrades = 3;
            int total;
            double average;
            total = grade1 + grade2 + grade3;
            average = static_cast<double>(total) / numGrades;
            cout << "The average is: " <<   average << endl;

            return 0;



}