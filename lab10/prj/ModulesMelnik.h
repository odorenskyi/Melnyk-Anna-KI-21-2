#ifndef MODULESMELNIK_H_INCLUDED
#define MODULESMELNIK_H_INCLUDED
#include <string>

using namespace std;

float s_calculation(int x, int z);
float electricity(float b);
int bofort(float n );
int word(string pathfile);
int binary(string pathfile,int num);
int info(string pathfile);
string readfile(string path_file);
int poem(string pathfile);
int calc(string pathfile);
int word(string path_infile, string path_outfile);
int findword(string path_infile, string uword);
void task10_1(string path_infile, string path_outfile);
void task10_2(string pathfile);
void task10_3(string pathfile,int x, int z, int num);
string clearText(string out_path);
#endif // MODULESMELNIK_H_INCLUDED
