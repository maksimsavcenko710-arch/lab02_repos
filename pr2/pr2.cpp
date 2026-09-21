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
    double o1;    // результат обчислення 1-го виразу
    double o2;    // результат обчислення 2-го виразу

    cout << "alpha = "; cin >> alpha;

    o1 = (sin(alpha) + sin(5 * alpha) - sin(3 * alpha)) / (cos(alpha) - cos(3 * alpha) + cos(5 * alpha));
    o2 = tan(3 * alpha);

    cout << endl;
    cout << "o1 = " << o1 << endl;
    cout << "o2 = " << o2 << endl;

    cin.get();
    return 0;
}