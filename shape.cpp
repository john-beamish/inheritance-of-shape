#include <iostream>
#include <string>
#include "shape.h"
using namespace std;

const double DEFAULT_AREA = 5.00;
const double DEFAULT_PERIMETER = 3.00;
const double MIN_AREA = 0;
const double MIN_PERIMETER = 0;


Shape::Shape() {
    
    area = DEFAULT_AREA;
    perimeter = DEFAULT_PERIMETER;
}

Shape::Shape (const double a, const double p) {
    
    area = a;
    perimeter = p;
}

void Shape::setArea (const double a) {
    
    if (a >= MIN_AREA) area = a;
    else area = DEFAULT_AREA;
}

void Shape::setPerimeter (const double p) {
    
    if (p >= MIN_PERIMETER) perimeter = p;
    else perimeter = DEFAULT_PERIMETER;
}

double Shape::getArea() {
    
    return area;
}

double Shape::getPerimeter() {
    
    return perimeter;
}

void Shape::printData() {
    
    cout << "____________________________" << endl;
    cout << "Shape Info:             <||/" << endl;
    cout << "Perimeter:      " << getPerimeter() << endl;
    cout << "Area:           " << getArea() << endl;
    cout << "____________________________" << endl;
    cout << endl;
}