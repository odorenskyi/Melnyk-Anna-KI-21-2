#include <iostream>
#include <conio.h>
#include <math.h>
#include "ModulesMelnik.h"

using namespace std;

int main(){
    float x[5] = { 1, 9, 43, 90, 10 };
    float z[5] = { 8, 5, 84, 52, 3};

    double expectedResult[5] = { 76.7261, 101.871, 2437.25, 1814.23, 173.203 };
    string testResult = "Failed";
    double result = 0;
    float  f = &s_calculation;

    for (int i = 0; i < 5; i++) {
        cout.precision(3);
        cout.setf(std::ios::fixed);

        if (result == expectedResult[i]) {
            testResult = "Passed";
        }
        cout << "Test case #" << i + 1 << ": " << endl;
        cout << "X = " << x << endl;
        cout << "Z = " << z << endl;
        cout << "Expected result: " << expectedResult[i] << endl;
        cout << "The result obtained: " <<  f << endl;
        cout << "Test result: " << testResult << endl << endl;
        testResult = "Failed";
    }
    getch();
    return 0;
}

