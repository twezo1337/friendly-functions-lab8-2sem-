#include <iostream>
#include <fstream>
using namespace std;
#include <windows.h>    
#include "roundCone.h"

int main(void) {
    setlocale(LC_ALL, "russian");

    roundCone A, B;
    cin >> A >> B;

    cout << "Vector A: ";
    cout << A;

    cout << "Vector B: ";
    cout << B;

    roundCone C, D;
    ifstream fin;
    fin.open("C:/Temp/f1.txt");
    if (fin.fail()) {
        cout << "open file ERROR";
        return 1;
    }

    while (!fin.eof()) {
        fin >> C >> D;
        fin.close();
    }

    ofstream fout;
    fout.open("C:/Temp/f2.txt");
    while (!fout.eof()) {
        fout << C << D;
        fout.close();
        return 0;
    }
    return 0;
}