#include <iostream>
#include <cmath>
#include <Windows.h>
#include "Cone.h"
using namespace std;




int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    setlocale(LC_ALL, "Russian");

    Cone c1(3, 7);
    Cone c2(1, 2, 3, 5, 10);

    cout << "Конус 1" << c1;
    cout << "Площадь 1 конуса  " << c1.area() << endl;
    cout << "Объем 1 конуса  " << c1.valume()<<endl;

    cout << "Конус 2" << c2;
    cout << "Площадь 2 конуса  " << c2.area()<<endl;
    cout << "Объем 2 конуса  " << c2.valume()<<endl;

    return 0;

}