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

    cout << "����� 1" << c1;
    cout << "������� 1 ������  " << c1.area() << endl;
    cout << "����� 1 ������  " << c1.valume()<<endl;

    cout << "����� 2" << c2;
    cout << "������� 2 ������  " << c2.area()<<endl;
    cout << "����� 2 ������  " << c2.valume()<<endl;

    return 0;

}