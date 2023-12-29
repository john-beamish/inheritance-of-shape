#include <iostream>
#include <string>
#include <cmath>
#include "triangle.h"
using namespace std;

Triangle::Triangle() {                  // default constructor
    
    side1 = DEFAULT_TRIANGLE_SIDE;
    side2 = DEFAULT_TRIANGLE_SIDE;
    side3 = DEFAULT_TRIANGLE_SIDE;
}

Triangle::Triangle(const double s1) {   // constructor for 1 parameter (produces equilateral triangle) 
    if (s1 >= DEFAULT_TRIANGLE_SIDE) {
        side1 = s1;
        side2 = s1;
        side3 = s1;
    }
    else {
        side1 = DEFAULT_TRIANGLE_SIDE;
        side2 = DEFAULT_TRIANGLE_SIDE;
        side3 = DEFAULT_TRIANGLE_SIDE;
    }
}

Triangle::Triangle(const double s1, const double s2) {  // constructor for 2 parameters. If valid, side3 is 1 more 
                                                        // than min valid value to satisy Triangle Inequality Theorem.   
    if (s1 >= DEFAULT_TRIANGLE_SIDE && s2 >= DEFAULT_TRIANGLE_SIDE) {
        side1 = s1;
        side2 = s2;
        side3 = (s1 + s2) - 1;  
        
    }
    else {
        side1 = DEFAULT_TRIANGLE_SIDE;
        side2 = DEFAULT_TRIANGLE_SIDE;
        side3 = DEFAULT_TRIANGLE_SIDE;
    }
}

Triangle::Triangle(const double s1, const double s2, const double s3) {     // 3 parameters
    
    if (s1 >= DEFAULT_TRIANGLE_SIDE && s2 >= DEFAULT_TRIANGLE_SIDE && s3 >= DEFAULT_TRIANGLE_SIDE) {    
        if (s1+s2 > s3 && s1+s3 > s2 && s2+s3 > s1) {   // checking if triangle is geometrically valid
            side1 = s1;
            side2 = s2;
            side3 = s3;
        }
        else {
            side1 = DEFAULT_TRIANGLE_SIDE;
            side2 = DEFAULT_TRIANGLE_SIDE;
            side3 = DEFAULT_TRIANGLE_SIDE;
        }
    }
    else {
        side1 = DEFAULT_TRIANGLE_SIDE;
        side2 = DEFAULT_TRIANGLE_SIDE;
        side3 = DEFAULT_TRIANGLE_SIDE;
    }
}

void Triangle::setSides (const double s1, const double s2, const double s3) {
    
    if (s1 >= DEFAULT_TRIANGLE_SIDE && s2 >= DEFAULT_TRIANGLE_SIDE && s3 >= DEFAULT_TRIANGLE_SIDE) {    
        if (s1+s2 > s3 && s1+s3 > s2 && s2+s3 > s1) {   // checking if triangle is geometrically valid
            side1 = s1;
            side2 = s2;
            side3 = s3;
        }
        else {
            side1 = DEFAULT_TRIANGLE_SIDE;
            side2 = DEFAULT_TRIANGLE_SIDE;
            side3 = DEFAULT_TRIANGLE_SIDE;
        }
    }
    else {
        side1 = DEFAULT_TRIANGLE_SIDE;
        side2 = DEFAULT_TRIANGLE_SIDE;
        side3 = DEFAULT_TRIANGLE_SIDE;
    }
}

double Triangle::getSide1() {
    
    return side1;
}

double Triangle::getSide2() {
    
    return side2;
}

double Triangle::getSide3() {
    
    return side3;
}

void Triangle::printData() {
    
    double triangleArea;
    double s;
    
    s = (side1 + side2 + side3) / 2;
    triangleArea = sqrt(abs(s * (s-side1) * (s-side2) * (s-side3)));
    
    setPerimeter(side1 + side2 + side3);
    setArea(triangleArea);
    
    cout << "____________________________" << endl;
    cout << "Triangle Info:            <|" << endl;
    cout << "Side Length 1:  " << getSide1() << endl;
    cout << "Side Length 2:  " << getSide2() << endl;
    cout << "Side Length 3:  " << getSide3() << endl;
    cout << "Perimeter:      " << getPerimeter() << endl;
    cout << "Area:           " << getArea() << endl;
    cout << "____________________________" << endl;
    cout << endl;
}