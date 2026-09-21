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
    double m1;    // результат обчислення 1-го виразу
    double m2;    // результат обчислення 2-го виразу

    cout << "alpha = "; cin >> alpha;

    m1 = (sin(alpha) + sin(5 * alpha) - sin(3 * alpha)) / (cos(alpha) - cos(3 * alpha) + cos(5 * alpha));
    m2 = tan(3 * alpha);

    cout << endl;
    cout << "m1 = " << m1 << endl;
    cout << "m2 = " << m2 << endl;

    cin.get();
    return 0;
}