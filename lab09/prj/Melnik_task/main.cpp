#include <iostream>
#include <math.h>
#include "ModulesMelnik.h"

using namespace std;
int main()
{
    system("chcp 866 && cls");
    int b=0, x=0, z=0, u=0;
    float n, k;
    char symbol;
    do{
        cout << "Виберіть символ:  " << endl;
        cout << " _________________________________________________ " << endl;
        cout << "| d                 | h                           |" << endl;
        cout << "| j                 | g                           |" << endl;
        cout << " ------------------------------------------------- " << endl;
        cin >> symbol;
        if(symbol == 'd'){
            cout << "Введіть  x" << endl;
            cin >> x;
            cout << "Введіть  z" << endl;
            cin >> z;
            cout << "S=" << endl;
            cout << s_calculation(x, z) << endl;
        }
        else if(symbol == 'g'){
            cout << "Введіть кількість спожитої елетроенергії за місяць" << endl;
            cin >> b;
            cout << electricity (b) << endl;
        }
        else if(symbol == 'h'){
            cout << "Вкажiть данi про швидкість вітру о 00:00: " << endl;
            cin >> n;
            for (int i = 4; i <=20; i += 4){
                    cout << "Вкажiть данi о " << i <<":00 "  ;
                    cin >> n;
        }
        bofort( n);
        }
        else if (symbol == 'j'){
            cout << "Введіть натуральне число: " << endl;
            cin >> u;
            cout << number(u) << endl;
        }
        else if (symbol != 'k' && symbol != 'K'  && symbol != 'j' && symbol != 'к') {
            cout << "\a" << endl;
        }
    }while (symbol != 'k' && symbol != 'K'  && symbol != 'j' && symbol != 'к');
}
