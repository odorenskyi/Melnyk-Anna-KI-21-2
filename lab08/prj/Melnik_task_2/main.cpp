#include <iostream>
#include "ModulesMelnik.h"

using namespace std;

void copyright()
{
    cout << "� ������� ����" << endl << endl;
}
void res ()
{
    int  a = 0,b = 0;
    if (a + 3 <= b){
        cout <<"true"<<endl;
    }
    else {
        cout <<"false"<<endl;
    }

}
void DecAndHex(int x, int y, int z){
    cout << "'y' � ���������: " << x << endl
         << "'x' � ���������: " << y << endl
         << "'z' � ���������: " << z << endl << endl;

    cout << "'y' � �������������: " << hex << x << endl
         << "'x' � �������������: " << hex << y << endl
         << "'z' � �������������: " << hex << z << endl;
}

int main()
{
    system("chcp 1251 && cls");
    copyright();
    int x = 0,y = 0,z = 0;
    int  a = 0,b = 0;
    cout << "������ x" << endl;
    cin >> x;
    cout << "������ y" << endl;
    cin >> y;
    cout << "������ z" << endl;
    cin >> z;
    cout << "������ a" << endl;
    cin >> a ;
    cout << "������ b" << endl;
    cin >> b;
    cout <<"S= "<< s_calculation(x,y)<< endl;
    res();
    DecAndHex(x,y,z);
    return 0;
}
