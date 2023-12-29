#ifndef SQUARE_H
#define SQUARE_H
#include <iostream>
#include <string>
#include "shape.h"
using namespace std;

const double DEFAULT_SQUARE_SIDE = 1.0;

class Square: public Shape {
    
    public:
        Square();
        Square (const double s);
        void setSide (const double s);
        double getSide();
        void printData() override;
        
        
    private:
        double side;
};
#endif