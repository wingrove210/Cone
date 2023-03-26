#pragma once
#include <iostream>
#include <cmath>
#include <Windows.h>
using namespace std;

class Cone {
private:
    double x, y, z;
    double radius;
    double height;
public:
    Cone() {
        x = y = z = radius = height = 0;
    }
    Cone(double r, double h) {
        x = y = z = 0.0;
        radius = r;
        height = h;
    }
    Cone(double a, double b, double c, double r, double h) {
        x = a;
        y = b;
        z = c;
        radius = r;
        height = h;
    }
    void setCoordinate(double a, double b, double c);
    void setRadius(double r);
    void setHeight(double h);
    double getRadius();
    double getHeight();
    double area();
    double valume();
    friend ostream& operator<<(ostream& stream, Cone obj);
};
