#include <iostream>
#include "ModulesMelnik.h"

using namespace std;

void copyright()
{
    cout << "© ћельник јнна" << endl << endl;
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
    cout << "'y' в дес€тков≥й: " << x << endl
         << "'x' в дес€тков≥й: " << y << endl
         << "'z' в дес€тков≥й: " << z << endl << endl;

    cout << "'y' в ш≥стнац€тков≥й: " << hex << x << endl
         << "'x' в ш≥стнац€тков≥й: " << hex << y << endl
         << "'z' в ш≥стнац€тков≥й: " << hex << z << endl;
}

int main()
{
    system("chcp 1251 && cls");
    copyright();
    int x = 0,y = 0,z = 0;
    int  a = 0,b = 0;
    cout << "¬вед≥ть x" << endl;
    cin >> x;
    cout << "¬вед≥ть y" << endl;
    cin >> y;
    cout << "¬вед≥ть z" << endl;
    cin >> z;
    cout << "¬вед≥ть a" << endl;
    cin >> a ;
    cout << "¬вед≥ть b" << endl;
    cin >> b;
    cout <<"S= "<< s_calculation(x,y)<< endl;
    res();
    DecAndHex(x,y,z);
    return 0;
}
