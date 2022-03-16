#include <iostream>
#include <iomanip>
#include <conio.h>
#include <clocale>
#include <math.h>
#include "../ModulesMelnik.h"

using namespace std;

int main()
{
    char *locale = setlocale(LC_ALL, "ukr");
    float x[5] = { 1, 9, 7, 8, 10};
    float z[5] = { 8, 5, 1, 2, 5};

    double expectedResult[5] = {76.7261, 101.871, 91.012, 44.1321, 92.1105};
  for (short i = 0; i < 5; i++)
    {
        if (round(s_calculation(x[i], z[i])*10000)/10000.0 == expectedResult [i])
        {
            cout << s_calculation(x[i],  z[i]) << " = " << expectedResult[i] << endl;
            cout << "Результат: #[" << i + 1 << "] PASSED\n";
        }
        else
        {
            cout << s_calculation(x[i], z[i]) << " = " << expectedResult[i] << endl;
            cout << "Результат: #[" << i + 1 << "] FAILED\n";
        }
    }
    _getch();
    return 0;
}

