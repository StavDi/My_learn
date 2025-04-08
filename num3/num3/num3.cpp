#include <iostream>
#include <fstream>
#include <ios>
#include <string.h>
#include "Time.h"
#include "TRAIN.h"
#include "My_Array.h"
#include "Sorte.h"
using namespace std;
bool bolshe(TRAIN& a, TRAIN& b)
{
    return b > a;
}
int main()
{
    ifstream in("text.txt");
    if (!in)cout << "\nfile not open\n";
    My_Array<TRAIN> mass;
    in >> mass;
    mass.sort(bolshe);
    ofstream outbin("train.bin", ios_base::binary);
    mass.writeBin(outbin);
    ifstream inbin("train.bin", ios_base::binary);
    My_Array<TRAIN> mass1;
    mass1.readBin(inbin);
    cout << "\n mass1\n";
    cout << mass1 << "\n\n";
    char n[80];
    cin >> n;
    bool flag = true;
    for (int i = 0; i < 8; i++)
    {
        if (strcmp(mass1[i].getpun(), n)==0)
        {
            cout << mass1[i];
            flag = false;
        }
    }
    if (flag)
    {
        cout << "No";
    }
}