#include <iostream>
#include <math.h>
#include <tgmath.h>
#include <windows.h>
#include <string>

using namespace std;

float s_calculation(int x, int z)
{

    return (sqrt ( 1 + abs ( cos (x))) +(2 * M_PI)+ (pow(abs(z-x) / sin (x), 2)));
}
