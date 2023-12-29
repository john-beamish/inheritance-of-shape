#ifndef CIRCLE_H
#define CIRCLE_H
#include <iostream>
#include <string>
#include <cmath>
#include "shape.h"
using namespace std;

const double DEFAULT_RADIUS = 1.00;

class Circle: public Shape {
    
    public:
        Circle();
        Circle (const double r);
        void setRadius (const double r);
        double getRadius();
        void printData() override;
        
    private:
        double radius;
};
#endif