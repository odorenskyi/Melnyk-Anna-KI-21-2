#include <iostream>
#include <math.h>
#include <tgmath.h>
#include <windows.h>
#include <string>
#include <bitset>

using namespace std;

float s_calculation(int x, int z)
{
    return (sqrt ( 1 + abs ( cos (x))) +(2 * M_PI)+ (pow(abs(z-x) / sin (x), 2)));
}
float electricity(float b)
{
    if (b <= 150){
        b = b * 30.84;
        cout <<"До сплати за місяць "<< b <<"грн"<< endl;
    }
    else {
        if(150 <= b <= 800){
            b = b * 41.94;
            cout <<"До сплати за місяць "<< b <<"грн"<< endl;
        }
        else{
            b = b * 134.04;
            cout <<"До сплати за місяць "<< b <<"грн"<< endl;
        }
    }
}
int bofort(float n){
    if (n < 0.3) {
        return 0 ;
    }
    else if (0.3 <= n && n <= 1.5) {
        return 1;
    }
    else if (1.6 <= n && n <= 3.4) {
        return 2;
    }
    else if (3.4 <= n && n <= 5.4) {
        return 3 ;
    }
    else if (5.5 <= n && n <= 7.9) {
        return 4;
    }
    else if (8.0 <= n && n <= 10.7) {
        return 5;
    }
    else if (10.8 <= n && n <= 13.8) {
        return 6;
    }
    else if (13.9 <= n && n <= 17.1) {
        return 7;
    }
    else if (17.2 <= n && n <= 20.7) {
        return 8;
    }
    else if (20.8 <= n && n <= 24.4) {
        return 9;
    }
    else if (24.5 <= n && n <= 28.4) {
        return 10;
    }
    else if (28.5 <= n && n <= 32.6) {
        return 11;
    }
    else if (n >= 32.7){
        return 12;
    }
}
int number(int u){
    bitset<32> b_number(u);
    if(b_number[9]){
        return b_number.count();
    }
    else {
        return 32 - b_number.count();
    }
}
const char* test(bool res){
    if(res){
        return "passed";
    }
    else{
        return "failed";
    }
}

