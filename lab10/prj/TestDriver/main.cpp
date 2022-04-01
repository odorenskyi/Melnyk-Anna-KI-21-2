#include <iostream>
#include <fstream>
#include <ctime>
#include <cstring>
#include <math.h>
#include <tgmath.h>
#include <windows.h>
#include <string>
#include <bitset>
#include "ModulesMelnik.h"
using namespace std;

string readfile(string path_file);
void testdriver_1(void);
void testdriver_2(void);
void testdriver_3(void);
string clearText(string out_path);

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    testdriver_1();
    testdriver_2();
    testdriver_3();
    system("pause");
    return 0;
}
void testdriver_1(void){
    char in_path[] = "D:\\.git\\Melnyk-Anna-KI-21-2\\lab10\\TestFile\\228.txt";
    char out_path[] = "D:\\.git\\Melnyk-Anna-KI-21-2\\lab10\\\TestFile\\1337.txt";
    string expected_test_10_1_1 = "D:\\.git\\Melnyk-Anna-KI-21-2\\lab10\\TestFile\\in_file1.txt";
    string expected_test_10_1_2 = "D:\\.git\\Melnyk-Anna-KI-21-2\\lab10\\TestFile\\in_file.txt";
    string reader, result_task_10_1_1, Rexpected_test_10_1_1;

    task10_1(in_path, out_path);
    Rexpected_test_10_1_1 = readfile(expected_test_10_1_1);
    reader = readfile(out_path);
    cout << "       Test10_1      " << endl;
    if(reader == Rexpected_test_10_1_1) cout << "\nPASSED.\n";
    else cout << "\n FAILED.\n";
}
void testdriver_2(void){
    time_t rawtime;
    time(&rawtime);
    char in_path[] = "D:\\.git\\Melnyk-Anna-KI-21-2\\lab10\\prj\\228.txt";
    char out_path[] = "D:\\.git\\Melnyk-Anna-KI-21-2\\lab10\\prj\\1337.txt";
    string expected_test_10_2_1 = "D:\\.git\\Melnyk-Anna-KI-21-2\\lab10\\TestFile\\in_file2.txt";
    string reader, result_task_10_2_1, Rexpected_test_10_2_1;

    task10_2(in_path);
    Rexpected_test_10_2_1 = readfile(expected_test_10_2_1);
    Rexpected_test_10_2_1 += ctime(&rawtime);
    reader = readfile(in_path);
    cout << "\n   Test10_2   " << endl;
    if(reader == Rexpected_test_10_2_1) cout << "\nPASSED.\n";
    else cout << "\nFAILED.\n";
}
void testdriver_3(void){
    char in_path[] = "D:\\.git\\Melnyk-Anna-KI-21-2\\lab10\\prj\\228.txt";
    char out_path[] = "D:\\.git\\Melnyk-Anna-KI-21-2\\lab10\\prj\\1337.txt";
    string expected_path_10_3_1 = "D:\\.git\\Melnyk-Anna-KI-21-2\\lab10\\TestFile\\in_file3.txt";
    string expected_path_10_3_2 = "D:\\.git\\Melnyk-Anna-KI-21-2\\lab10\\TestFile\\in_file3_2.txt";
    string reader;

    float x[5] = { 1, 9, 7, 8, 10};
    float z[5] = { 8, 5, 1, 2, 5};
    int num [5] = {27, 35,4,328,367};
    double expectedResult[5] = {76.7261, 101.871, 91.012, 44.1321, 92.1105};
    cout << "       Test10_3       " << endl;
    for (short i = 0; i < 5; i++)
    {
        if (round(s_calculation(x[i], z[i])*10000)/10000.0 == expectedResult [i])
        {

            cout << i + 1 << " PASSED\n";
        }
        else {
            cout << i + 1 << " Failed\n";
        }
    reader = readfile(out_path);
    }
}
