#include <iostream>
#include <fstream>
#include <time.h>
#include <cstring>
#include <math.h>
#include <tgmath.h>
#include <windows.h>
#include <string>
#include <bitset>
#include <fstream>

using namespace std;

float s_calculation(int x, int z){
    return (sqrt ( 1 + abs ( cos (x))) +(2 * M_PI)+ (pow(abs(z-x) / sin (x), 2)));
}
float electricity(float b){
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
int info(string path_infile){
    ofstream file(path_infile);
    if(!file.is_open())
         return -1;
    file <<"                                   /\\_/\\                                  "<< endl
         <<"                                  ( o.o )                                   "<< endl
         <<"                                   > ^ <                                    "<< endl
	     << "✺—————————————————————————————————————————————————————————————————————————✺"<< endl
         << " Виконавець:         Мельник Анна"                                          << endl
         << " Рік розробки:       2022"                                                  << endl
         << " Місто/Країна:       Кропивницький/Україна"                                 << endl
         << " ВНЗ:                Центральний Національний Технічний Університет"        << endl
         << "✺—————————————————————————————————————————————————————————————————————————✺"<< endl << endl;
    file.close();
    return 0;
}
string readfile(string path_file){
    ifstream file(path_file);
    if(!file.is_open()) return "ERROR";
    string text = "";
    string line;
    while (getline(file, line)){
        text += line + '\n';
    }
    file.close();
    return text;
}

int poem(string pathfile){
    ofstream file(pathfile,ios::app);
    if(!file.is_open())
        return -1;
    file << "Ви завжди за всіх були дбайливі -"<< endl
         << "Бо така ж та доля у вдови."<< endl
         << "Бо ж як будуть всі навкруг щасливі,"<< endl
         << "То щасливі будете і Ви."<< endl
         << "Дата та час дозапису інформації:" << endl << endl
         << __TIMESTAMP__<< endl;
    file.close();
    return 0;
}

int calc(string pathfile){
    ofstream file(pathfile, ios::app);
    if(!file.is_open())
        return -1;
    int x = 0,z = 0;
    cout << "Введіть x: " << endl;
    cin >> x;
    cout << "Введіть z:" << endl;
    cin >> z;
    file << "Результати функції:" << s_calculation(x, z) << endl;
    file.close();
    return 0;
}

int binary(string pathfile,int num){
    ofstream file(pathfile, ios::app);
    if(!file.is_open())
        return -1;
    cout << "Введіть num: "<<;
    int bin = 0, k = 1;
    while (num)
    {
        bin += (num % 2) * k;
        k *= 10;
        num /= 2;
    }
    cout << "Число в двійковій системі:";
    file << bin;
    return 0;
}

int word(string path_infile, string path_outfile){
    string word = readfile(path_infile);
    ofstream in_file(path_infile, ios::app);
    ofstream out_file(path_outfile, ios::app);
    if(!in_file.is_open())
        return -1;
    if(!out_file.is_open())
        return -1;
    int b=0;
    for(int i = 0; i < 5; ++i){
        if (word[i] == ',' || word[i] == '.' || word[i] == '?' || word[i] == '!' ){
            out_file << "\nВ файлі присутня пунктуація";
            in_file << "\nХай щастить!";
        }
        if ((word[i]>='а' && word[i] <= 'я') || (word[i]>='А' && word[i] <= 'Я')) {
            b++;
            in_file << "\n Кількість букв: \n" << b;
            out_file <<" Перший космонавт незалежної України - Леонід Каденюк";
        }
    }
    in_file.close();
    out_file.close();
    return 0;
}
int findword(string path_infile, string word)
{
    ofstream in_file(path_infile, ios::app);
    string poem  = {  "Хай щастить у Вашій хаті, мамо,\n"
                      "Всім, хто переступіть Ваш поріг:\n"
                      "Добрим людям, і птахам так само,\n"
                      "І котові, що в теплі приліг;\n"
                      "Хай щастить кожненькій деревині,\n"
                      "Що до хати віти притуля,\n"
                      "Хай щастить малесенькій травині\n"
                      "Й вітерцю, що приліта здаля.\n" };
    size_t fw;

    fw = poem.find(word);
    if(!in_file.is_open())
        return -1;
        if (fw != string::npos) {
        in_file << "Слово \"" << word << "знайдено" << endl << endl;
        in_file.close();
        return true;
    }
    in_file << "Cлово " << word << " - не знайдено" << endl << endl;
    in_file.close();
    return false;
}

void task10_1(string path_infile, string path_outfile){
    info(path_infile);
    word(path_infile,path_outfile);
//    findword(path_infile,word)
}

void task10_2(string pathfile){
    poem(pathfile);
}

void task10_3(string pathfile){
    calc(pathfile);
    binary(pathfile, 1337);
}
