#include <iostream>
#include <cmath>
#include "ModulesMelnik.h"
#include <windows.h>

using namespace std;

void copyright()
{
    system("chcp 1251 && cls");
    cout << "� ������� ����" << endl << endl;
}
void calculus(){
    int x = 0,  y=0, z=0;
    cout << "'x' � ���������: " << dec << x
         << "\t'x' � ��������������: " << hex << x << endl;
    cout << "'y' � ���������: " << dec << y
         << "\t'y' � ��������������: " << hex << y << endl;
    cout << "'z' � ���������: " << dec << z
         << "\t'z' � ��������������: " << hex << z << endl << endl;
}
int main()
{
    copyright();
    int x = 0, y=0, z=0, a=0, b=0;
    cout << "������ x" << endl;
    cin >> x;
    cout << "������ z" << endl;
    cin >> z;
    cout << s_calculation( x,z ) << endl;\
    calculus();
}
