#ifndef TRIANGLE_H
#define TRIANGLE_H
#include <iostream>
#include <string>
#include <cmath>
#include "shape.h"
using namespace std;

const double DEFAULT_TRIANGLE_SIDE = 1.0;

class Triangle: public Shape {
    
    public:
        Triangle();
        Triangle (const double s1);
        Triangle (const double s1, const double s2);
        Triangle (const double s1, const double s2, const double s3);
        void setSides (const double s1, const double s2, const double s3);
        double getSide1();
        double getSide2();
        double getSide3();
        void printData() override;
        
    private:
        double side1;
        double side2;
        double side3;
};
#endif