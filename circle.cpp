#include <iostream>
#include <string>
#include <cmath>
#include "circle.h"
using namespace std;

Circle::Circle() {
    
    radius = DEFAULT_RADIUS;
}

Circle::Circle (const double r) {
    
    if (r >= DEFAULT_RADIUS) radius = r;
    else radius = DEFAULT_RADIUS;
}

void Circle::setRadius (const double r) {
    
    if (r >= DEFAULT_RADIUS) radius = r;
    else radius = DEFAULT_RADIUS;
}

double Circle::getRadius() {
    
    return radius;
}

void Circle::printData() {
    
    setPerimeter(M_PI * (2 * radius));
    setArea(M_PI * (radius * radius));
    
    cout << "____________________________" << endl;
    cout << "Circle Info:             ( )" << endl;
    cout << "Radius Length:  " << getRadius() << endl;
    cout << "Perimeter:      " << getPerimeter() << endl;
    cout << "Area:           " << getArea() << endl;
    cout << "____________________________" << endl;
    cout << endl;
}