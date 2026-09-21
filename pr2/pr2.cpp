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
    double k;     // вхідний параметр
    double m1;    // результат обчислення 1-го виразу
    double m2;    // результат обчислення 2-го виразу

    cout << "k = "; cin >> k;

    m1 = (sin(k) + sin(5 * k) - sin(3 * k)) / (cos(k) - cos(3 * k) + cos(5 * k));
    m2 = tan(3 * k);

    cout << endl;
    cout << "m1 = " << m1 << endl;
    cout << "m2 = " << m2 << endl;

    cin.get();
    return 0;
}