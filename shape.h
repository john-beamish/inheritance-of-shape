#include <iostream>
#include <string>
using namespace std;

#ifndef SHAPE_H
#define SHAPE_H

class Shape {
    
    public:
        Shape();
        Shape (const double a, const double p);
        void setArea (const double a);
        void setPerimeter (const double p);
        double getArea();
        double getPerimeter();
        virtual void printData();
    
    protected:  
        double area;
        double perimeter;
    
    private:
        
};

#endif