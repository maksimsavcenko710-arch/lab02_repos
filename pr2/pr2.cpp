// Lab_02.cpp
// Савченко Максим В'ячеславович
// Лабораторна робота № 2.
// Лінійні програми.
// Варіант 24

#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    double alpha; // вхідний параметр
    double z1;    // результат обчислення 1-го виразу
    double z2;    // результат обчислення 2-го виразу

    cout << "alpha = "; cin >> alpha;

    z1 = (sin(alpha) + sin(5 * alpha) - sin(3 * alpha)) / (cos(alpha) - cos(3 * alpha) + cos(5 * alpha));
    z2 = tan(3 * alpha);

    cout << endl;
    cout << "z1 = " << z1 << endl;
    cout << "z2 = " << z2 << endl;

    cin.get();
    return 0;
}