#include <iostream>
#include <cmath>
#include <Windows.h>
#include "Cone.h"
using namespace std;

const double pi = 3.14159265;


void Cone::setCoordinate(double a, double b, double c) {
    x = a;
    y = b;
    z = c;
}
void Cone::setRadius(double r) {
    radius = r;
}
void Cone::setHeight(double h) {
    height = h;
}
double Cone::getRadius() { return radius; }
double Cone::getHeight() { return height; }
double Cone::area() {
    double l = sqrt(height * height + radius * radius);
    return pi * radius * (radius+l);
}
double Cone::valume() {
    return pi * radius * radius * height / 3;
}
ostream& operator<<(ostream& stream, Cone obj) {
    stream << "(" << obj.x << " ;";
    stream << obj.y << " ;";
    stream << obj.z << " ) ";
    stream<<"h="<< obj.radius << "  ";
    stream <<"r="<< obj.height << " \n";
    return stream;
}



