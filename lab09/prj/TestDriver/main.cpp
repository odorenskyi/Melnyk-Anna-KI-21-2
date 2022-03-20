#include <iostream>
#include "ModulesMelnik.h"

using namespace std;

int main()
{
    system("chcp 866 && cls");
    int b[5]={687, 99, 150, 800, 30};
    double expresult_electricity[5]={ 28812.8, 3053.16, 4626, 33552, 925.2};
    cout << "Тестування завдання № 9.1" << endl;
    for (int i=0; i<5; i++){
         if (expresult_electricity[i] != electricity(b[i])){
             cout <<"Passed" << endl;
             }
        else {
            cout << "Failed";
            cout << endl;
        }
    }
    float n[5]={0.3, 9, 4, 7, 32};
    float expres_bofort[5]={1, 5, 3, 4, 11};
    cout << "Тестування завдання № 9.2" << endl;
    for (int i=0; i<5; i++){
         if (expres_bofort[i] == bofort(n[i])){
             cout <<"Passed" << endl;
             }
        else {
            cout << "Failed";
            cout << endl;
        }
    }
    int u[5]={45, 81, 90, 12, 1567};
    int expres_number[5]={28, 29, 28, 30, 7};
    cout << "Тестування завдання № 9.3" << endl;
    for (int i=0; i<5; i++){
         if (expres_number[i] == number(u[i])){
             cout <<"Passed" << endl;
             }
        else {
            cout << "Failed";
            cout << endl;
        }
    }
}
