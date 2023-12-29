#include <iostream>
#include <string>
#include "rectangle.h"
using namespace std;

Rectangle::Rectangle() {
    
    side1 = DEFAULT_RECT_SIDE1;
    side2 = DEFAULT_RECT_SIDE2;
}

Rectangle::Rectangle(const double s1) {
    
    if (s1 >= MIN_RECT_SIDE) side1 = s1;
    else {
        side1 = DEFAULT_RECT_SIDE1;
        side2 = DEFAULT_RECT_SIDE2;
    }
}

Rectangle::Rectangle (const double s1, const double s2) {
    
    if (s1 >= MIN_RECT_SIDE) side1 = s1;
    else side1 = DEFAULT_RECT_SIDE1;
    
    if (s2 >= MIN_RECT_SIDE) side2 = s2;
    else side2 = DEFAULT_RECT_SIDE2;
}

void Rectangle::setSides (const double s1, const double s2) {
    
    if (s1 >= MIN_RECT_SIDE) side1 = s1;
    else side1 = DEFAULT_RECT_SIDE1;
    
    if (s2 >= MIN_RECT_SIDE) side2 = s2;
    else side2 = DEFAULT_RECT_SIDE2
    ;
}

double Rectangle::getSide1() {
    
    return side1;
}

double Rectangle::getSide2() {
    
    return side2;
}

void Rectangle::printData() {
    
    setPerimeter((side1 * 2) + (side2 * 2));
    setArea(side1 * side2);
    
    cout << "____________________________" << endl;
    cout << "Rectangle Info:        [|||]" << endl;
    cout << "Side Length 1:  " << getSide1() << endl;
    cout << "Side Length 2:  " << getSide2() << endl;
    cout << "Perimeter:      " << getPerimeter() << endl;
    cout << "Area:           " << getArea() << endl;
    cout << "____________________________" << endl;
    cout << endl;
}