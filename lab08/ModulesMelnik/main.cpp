#include <iostream>
#include <math.h>
#include <tgmath.h>
#include <windows.h>
#include <string>

using namespace std;

double s_calculation(float x, float z)
{
    const double pi = 3.14159;
    return (sqrt ( 1 + abs ( cos (x))) +(2 * pi)+ (pow(abs(z-x) / sin (x), 2)));
}