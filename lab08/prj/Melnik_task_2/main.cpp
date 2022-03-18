#include <iostream>
#include "ModulesMelnik.h"

using namespace std;

void copyright()
{
    cout << "© Мельник Анна" << endl << endl;
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
    cout << "'y' в десятковій: " << x << endl
         << "'x' в десятковій: " << y << endl
         << "'z' в десятковій: " << z << endl << endl;

    cout << "'y' в шістнацятковій: " << hex << x << endl
         << "'x' в шістнацятковій: " << hex << y << endl
         << "'z' в шістнацятковій: " << hex << z << endl;
}

int main()
{
    system("chcp 866 && cls");
    copyright();
    int x = 0,y = 0,z = 0;
    int  a = 0,b = 0;
    cout << "Введіть x" << endl;
    cin >> x;
    cout << "Введіть y" << endl;
    cin >> y;
    cout << "Введіть z" << endl;
    cin >> z;
    cout << "Введіть a" << endl;
    cin >> a ;
    cout << "Введіть b" << endl;
    cin >> b;
    cout <<"S= "<< s_calculation(x,y)<< endl;
    res();
    DecAndHex(x,y,z);
    return 0;
}
