#include <iostream>
#include <cmath>
#include <conio.h>

/*
    Source by Programiz
    Modified For Learn by RK
    I.D.E : VS2019
*/

using namespace std;

int main()
{
    int q;
    double x = 17.5, hasil;  int y = 45;

    hasil = remquo(x, y, &q);
    cout << "Remainder of " << x << "/" << y << " = " << hasil << endl;

    _getch();
    return 0;
}