#include <iostream>
#include <cmath>
#include "ModulesMelnik.h"
#include <windows.h>

using namespace std;

void copyright()
{
    system("chcp 1251 && cls");
    cout << "© Мельник Анна" << endl << endl;
}
void calculus(){
    int x = 0,  y=0, z=0;
    cout << "'x' В десятковій: " << dec << x
         << "\t'x' В шістнадцятковій: " << hex << x << endl;
    cout << "'y' В десятковій: " << dec << y
         << "\t'y' В шістнадцятковій: " << hex << y << endl;
    cout << "'z' В десятковій: " << dec << z
         << "\t'z' В шістнадцятковій: " << hex << z << endl << endl;
}
int main()
{
    copyright();
    int x = 0, y=0, z=0, a=0, b=0;
    cout << "Введіть x" << endl;
    cin >> x;
    cout << "Введіть z" << endl;
    cin >> z;
    cout << s_calculation( x,z ) << endl;\
    calculus();
}
