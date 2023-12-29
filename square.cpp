#include <iostream>
#include <string>
#include "square.h"
using namespace std;

Square::Square() {
    
    side = DEFAULT_SQUARE_SIDE;
}

Square::Square (const double s) {
    
    if (s >= DEFAULT_SQUARE_SIDE) side = s;
    else side = DEFAULT_SQUARE_SIDE;
}

void Square::setSide (const double s) {
    
    if (s >= DEFAULT_SQUARE_SIDE) side = s;
    else side = DEFAULT_SQUARE_SIDE;
}

double Square::getSide() {
    
    return side;
}

void Square::printData() {
    
    setPerimeter(side * 4);
    setArea(side * side);
    
    cout << "____________________________" << endl;
    cout << "Square Info:              []" << endl;
    cout << "Side Length:    " << getSide() << endl;
    cout << "Perimeter:      " << getPerimeter() << endl;
    cout << "Area:           " << getArea() << endl;
    cout << "____________________________" << endl;
    cout << endl;
}