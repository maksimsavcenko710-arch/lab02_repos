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
    double p1;    // результат обчислення 1-го виразу
    double p2;    // результат обчислення 2-го виразу

    cout << "alpha = "; cin >> alpha;

    p1 = (sin(alpha) + sin(5 * alpha) - sin(3 * alpha)) / (cos(alpha) - cos(3 * alpha) + cos(5 * alpha));
    p2 = tan(3 * alpha);

    cout << endl;
    cout << "p1 = " << p1 << endl;
    cout << "p2 = " << p2 << endl;

    cin.get();
    return 0;
}