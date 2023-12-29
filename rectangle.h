#ifndef RECTANGLE_H
#define RECTANGLE_H
#include <iostream>
#include <string>
#include "shape.h"
using namespace std;

const double MIN_RECT_SIDE = 1.00;
const double DEFAULT_RECT_SIDE1 = 1.00;
const double DEFAULT_RECT_SIDE2 = 2.00;

class Rectangle: public Shape {
    
    public:
        Rectangle();
        Rectangle(const double s1);
        Rectangle (const double s1, const double s2);
        void setSides (const double s1, const double s2);
        double getSide1();
        double getSide2();
        void printData() override;
        
    private:
        double side1;
        double side2;
};
#endif