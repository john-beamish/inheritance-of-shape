#include <iostream>
#include <string>
#include "shape.h"
#include "square.h"
#include "rectangle.h"
#include "circle.h"
#include "triangle.h"

using namespace std;

int main (void) {
    
    Shape MyShape1;
    Shape MyShape2(10.6566776,5.00);
    Square MySquare1;
    Square MySquare2(348.867);
    Rectangle MyRectangle1;
    Rectangle MyRectangle2(80);
    Rectangle MyRectangle3(23.76, 9.8);
    Circle MyCircle1;
    Circle MyCircle2(8);
    Triangle MyTriangle1;
    Triangle MyTriangle2(1.2);
    Triangle MyTriangle3(65, 23);
    Triangle MyTriangle4(22, 90, 200);
    Triangle MyTriangle5(10,15,20);
    
    cout << "Shape w/ defualt constructor:" << endl;
    MyShape1.printData();       
    cout << "Shape w/ parameters:" << endl;
    MyShape2.printData();      
    cout << "Square w/ default constructor:" << endl;
    MySquare1.printData();      
    cout << "Square w/ parameter:" << endl;
    MySquare2.printData();      
    cout << "Rectangle w/ default constructors:" << endl;
    MyRectangle1.printData();   
    cout << "Rectangle w/ 1 constructor:" << endl;
    MyRectangle2.printData();   
    cout << "Rectangle w/ 2 constructors:" << endl;
    MyRectangle3.printData();   
    cout << "Circle w/ default constructor:" << endl;
    MyCircle1.printData();       
    cout << "Circle w/ parameter:" << endl;
    MyCircle2.printData();      
    cout << "Triangle w/ default constructor:" << endl;
    MyTriangle1.printData();    
    cout << "Triangle w/ 1 parameter:" << endl;
    MyTriangle2.printData();     
    cout << "Triangle w/ 2 parameters:" << endl;
    MyTriangle3.printData();    
    cout << "Geometrically invalid Triangle w/ 3 parameters:" << endl;
    MyTriangle4.printData();    
    cout << "Geometrically valid Triangle w/ 3 parameters:" << endl;
    MyTriangle5.printData();    
    
    
    
    return 0;
}
