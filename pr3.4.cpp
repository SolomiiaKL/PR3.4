// Lab_03_4.cpp
// < Клак Соломія >
// Лабораторна робота № 3.4
// Розгалуження, задане плоскою фігурою.
// Варіант 14.

#include <iostream>

using namespace std;

int main()
{
    double x;  // абсциса точки
    double y;  // ордината точки
    double R1; // радіус внутрішнього кола
    double R2; // радіус зовнішнього кола

    cout << "R1 = "; cin >> R1;
    cout << "R2 = "; cin >> R2;
    cout << "x = ";  cin >> x;
    cout << "y = ";  cin >> y;

    if ((x * x + y * y >= R1 * R1) && (x * x + y * y <= R2 * R2))
    {
        cout << "yes" << endl;
    }
    else
    {
        cout << "no" << endl;
    }

    cin.get();
    return 0;
}