#include <iostream>
#include <cmath>
#include "ModulesMelnik.h"
#include <windows.h>

using namespace std;

int main()
{
    system("chcp 1251 && cls");
    int x = 0,z=0;
    cout << "������ x" << endl;
    cin >> x;
    cout << "������ z" << endl;
    cin >> z;
    cout <<"S= " << s_calculation(x,z) << endl;
}
